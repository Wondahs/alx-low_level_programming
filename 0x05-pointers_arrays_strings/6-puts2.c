#include "main.h"
/**
 *puts2 - prints evey other character in a string
 *@str: input string
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
