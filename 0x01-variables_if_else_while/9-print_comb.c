#include <stdio.h>
/**
 * main - Entry point
 * Return: Returns 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar('0' + i);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
