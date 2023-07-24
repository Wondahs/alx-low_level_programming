#include "main.h"
/**
 *puts_half - prints second half of string
 *@str: input string
 *
 */
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
	}
}
