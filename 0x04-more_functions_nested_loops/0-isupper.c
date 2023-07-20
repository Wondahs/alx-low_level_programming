#include <stdio.h>
/**
 * _isupper - checks for uppercase characters
 * @c: input
 * Return: 1 if upper, 0 if lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
