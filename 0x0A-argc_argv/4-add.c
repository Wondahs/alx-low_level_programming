#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Adds two numbers
 *@args: Number of items
 *@argv: Numbers
 *Return: 1 if arguments are not numbers, 0 if successful
 */
int main(int args, char *argv[])
{
	int i, sum = 0, j, digit, count = args;
	char *number;

	if (count == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < args; i++)
	{
		number = argv[i];
		for (j = 0; number[j] != '\0'; j++)
		{
			if (!isdigit(number[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		digit = atoi(number);
		sum += digit;
	}
	printf("%d\n", sum);
	return (0);
}
