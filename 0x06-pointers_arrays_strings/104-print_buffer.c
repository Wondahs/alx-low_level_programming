#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints buffer in a specific format.
 * @buffer: The buffer to be printed.
 * @size: The size of the buffer.
 *
 * Return: void
 */
void print_buffer(char *buffer, int size)
{
	int offset, row_size, i;

	offset = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (offset < size)
	{
		row_size = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);
		for (i = 0; i < 10; i++)
		{
			if (i < row_size)
				printf("%02x", *(buffer + offset + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < row_size; i++)
		{
			int character = *(buffer + offset + i);

			if (character < 32 || character > 132)
			{
				character = '.';
			}
			printf("%c", character);
		}
		printf("\n");
		offset += 10;
	}
}
