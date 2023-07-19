#include <stdio.h>
/**
 * main - calculate fibonacci
 * Return: 0
 */
int main(void)
{
	unsigned long int i, first = 1, second = 2, next;

	printf("%ld, ", first);
	for (i = 0; i < 50; i++)
	{
		printf("%lu", second);
		if (i != 49)
		{
			printf(", ");
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
