#include "main.h"
/**
 *_puts_recursion - Prints a string recursively
 *@s: String to be printed
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		_putchar('\n');
	else
	{
		s++;
		_puts_recursion(s);
	}
}
