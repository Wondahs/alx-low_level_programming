#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	int last_index = bytes - 1;

	for (i = 0; i < bytes; i++)
	{
		if (i == last_index)
		{
			printf("%02hhx\n", arr[i]);
		}
		else
		{
			printf("%02hhx ", arr[i]);
		}
	}
	return (0);
}
