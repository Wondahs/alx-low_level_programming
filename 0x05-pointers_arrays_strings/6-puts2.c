#include "main.h"
/**
 *puts2 - prints evey other character in a string
 *@str: input string
 *
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
