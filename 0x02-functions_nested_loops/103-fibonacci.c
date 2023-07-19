#include <stdio.h>
/**
 * main - fibonacci calculator
 * Return: Always 0
 */
int main(void)
{
	int limit = 4000000, first = 1, second = 2, next, sum = 2;

	while (next <= limit)
	{
		next = first + second;
		if (next % 2 == 0)
		{
			sum += next;
		}
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);
}
