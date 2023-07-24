#include "main.h"
/**
 *puts_half - prints second half of string
 *@str: input string
 *
 */
void puts_half(char *str)
{
	int i, len = 0, j;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (len % 2 != 0)
	{
		for (j = ((len - 1) / 2) + 1; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
