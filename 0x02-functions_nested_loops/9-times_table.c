#include "main.h"
/**
 *times_table - prints multiplication table from 0 - 9
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			_putchar('0' + (i * j));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
