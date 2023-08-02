#include "main.h"
/**
 *_puts_recursion - Prints a string recursively
 *@s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
