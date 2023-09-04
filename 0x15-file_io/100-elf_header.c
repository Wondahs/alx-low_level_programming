#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validate_elf_header(unsigned char *magic_numbers);
void print_magic_numbers(unsigned char *magic_numbers);
void print_elf_class(unsigned char *magic_numbers);
void print_data_encoding(unsigned char *magic_numbers);
void print_elf_version(unsigned char *magic_numbers);
void print_os_abi(unsigned char *magic_numbers);
void print_abi_version(unsigned char *magic_numbers);
void print_elf_type(unsigned int elf_type, unsigned char *magic_numbers);
void print_entry_point(unsigned long int entry_point, unsigned char *magic_numbers);
void close_elf_file(int file_descriptor);

int main(int argc, char *argv[])
{
    Elf64_Ehdr *header;
    int file_descriptor, read_result;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <elf_filename>\n", argv[0]);
        exit(1);
    }

    file_descriptor = open(argv[1], O_RDONLY);
    if (file_descriptor == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        close_elf_file(file_descriptor);
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(98);
    }

    read_result = read(file_descriptor, header, sizeof(Elf64_Ehdr));
    if (read_result == -1)
    {
        free(header);
        close_elf_file(file_descriptor);
        fprintf(stderr, "Error: Failed to read file %s\n", argv[1]);
        exit(98);
    }

    validate_elf_header(header->e_ident);

    printf("ELF Header:\n");
    print_magic_numbers(header->e_ident);
    print_elf_class(header->e_ident);
    print_data_encoding(header->e_ident);
    print_elf_version(header->e_ident);
    print_os_abi(header->e_ident);
    print_abi_version(header->e_ident);
    print_elf_type(header->e_type, header->e_ident);
    print_entry_point(header->e_entry, header->e_ident);

    free(header);
    close_elf_file(file_descriptor);

    return 0;
}

void validate_elf_header(unsigned char *magic_numbers)
{
	int index;
	for (index = 0; index < 4; index++)
    {
        if (magic_numbers[index] != 127 &&
            magic_numbers[index] != 'E' &&
            magic_numbers[index] != 'L' &&
            magic_numbers[index] != 'F')
        {
            fprintf(stderr, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

void print_magic_numbers(unsigned char *magic_numbers)
{
	int index;
    printf(" Magic: ");
    for (index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", magic_numbers[index]);
        if (index == EI_NIDENT - 1)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
}

void print_elf_class(unsigned char *magic_numbers)
{
    printf(" Class: ");
    switch (magic_numbers[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", magic_numbers[EI_CLASS]);
    }
}

void print_data_encoding(unsigned char *magic_numbers)
{
    printf(" Data: ");
    switch (magic_numbers[EI_DATA])
    {
    case ELFDATANONE:
        printf("none\n");
        break;
    case ELFDATA2LSB:
        printf("2's complement, little endian\n");
        break;
    case ELFDATA2MSB:
        printf("2's complement, big endian\n");
        break;
    default:
        printf("<unknown: %x>\n", magic_numbers[EI_CLASS]);
    }
}

void print_elf_version(unsigned char *magic_numbers)
{
    printf(" Version: %d", magic_numbers[EI_VERSION]);
    switch (magic_numbers[EI_VERSION])
    {
    case EV_CURRENT:
        printf(" (current)\n");
        break;
    default:
        printf("\n");
        break;
    }
}

void print_os_abi(unsigned char *magic_numbers)
{
    printf(" OS/ABI: ");
    switch (magic_numbers[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - TRU64\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", magic_numbers[EI_OSABI]);
    }
}

void print_abi_version(unsigned char *magic_numbers)
{
    printf(" ABI Version: %d\n", magic_numbers[EI_ABIVERSION]);
}

void print_elf_type(unsigned int elf_type, unsigned char *magic_numbers)
{
    if (magic_numbers[EI_DATA] == ELFDATA2MSB)
    {
        elf_type >>= 8;
    }

    printf(" Type: ");
    switch (elf_type)
    {
    case ET_NONE:
        printf("NONE (None)\n");
        break;
    case ET_REL:
        printf("REL (Relocatable file)\n");
        break;
    case ET_EXEC:
        printf("EXEC (Executable file)\n");
        break;
    case ET_DYN:
        printf("DYN (Shared object file)\n");
        break;
    case ET_CORE:
        printf("CORE (Core file)\n");
        break;
    default:
        printf("<unknown: %x>\n", elf_type);
    }
}

void print_entry_point(unsigned long int entry_point, unsigned char *magic_numbers)
{
    printf(" Entry point address: ");

    if (magic_numbers[EI_DATA] == ELFDATA2MSB)
    {
        entry_point = ((entry_point << 8) & 0xFF00FF00) |
                      ((entry_point >> 8) & 0xFF00FF);
        entry_point = (entry_point << 16) | (entry_point >> 16);
    }

    if (magic_numbers[EI_CLASS] == ELFCLASS32)
    {
        printf("%#lx\n", (unsigned long int)entry_point);
    }
    else
    {
        printf("%#lx\n", entry_point);
    }
}

void close_elf_file(int file_descriptor)
{
    if (close(file_descriptor) == -1)
    {
        fprintf(stderr, "Error: Can't close file descriptor %d\n", file_descriptor);
        exit(98);
    }
}
