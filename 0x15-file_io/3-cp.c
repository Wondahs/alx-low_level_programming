#include "main.h"

int errors(int n, const char *c);

/**
 *
 *
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int fileTo, fileFrom;
	char buffer[1024];
	ssize_t bytesRead, written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
		errors(98, argv[1]);

	fileTo = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fileTo == -1)
		errors(99, argv[2]);

	while (1)
	{
		bytesRead = read(fileFrom, buffer, sizeof(buffer));
		if (bytesRead == 0)
			break;
		if (bytesRead < 0)
			errors(98, argv[1]);
		written = write(fileTo, buffer, sizeof(buffer));
		if (written == -1)
			errors(99, argv[2]);
	}
	close(fileFrom);
	close(fileTo);
	if (close(fileFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}
	if (close(fileTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}
	return (0);
}


/**
 *
 *
 *
 *
 *
 *
 */
int errors(int n, const char *c)
{
	switch (n)
	{
		case 98:
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", c);
			exit(98);
			break;
		}

		case 99:
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", c);
			exit(99);
			break;
		}
	}
	return (0);
}
