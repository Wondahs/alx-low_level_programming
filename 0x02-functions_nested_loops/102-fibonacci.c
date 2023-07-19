#include <stdio.h>
/**
 * main - calculate fibonacci
 * Return: 0
 */
int main(void)
{
	unsigned long int i, first = 1, second = 2, next;

	printf("%lu, %lu, ", first, second);
	for (i = 2; i < 50; i++)
	{
		next = first + second;
		printf("%lu", next);
		if (i != 49)
		{
			printf(", ");
		}
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
