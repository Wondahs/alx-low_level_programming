#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiplies two numbers
 *@args: Number of items
 *@argv: Numbers
 *Return: 1 if arguments are not 2, 0 if successful
 */
int main(int args, char *argv[])
{
	int result, num1, num2;

	if (args != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
