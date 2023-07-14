#include <stdio.h>
/**
 * main - Entry point
 * Return: Returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		if (i < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
