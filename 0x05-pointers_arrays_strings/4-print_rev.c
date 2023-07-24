#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The input string to print in reverse.
 *
 * Return: None.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
