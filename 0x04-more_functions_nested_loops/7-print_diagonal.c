#include "main.h"
/**
 *print_diagonal - print diagonal
 *@n: spaces
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else if (j < i)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

