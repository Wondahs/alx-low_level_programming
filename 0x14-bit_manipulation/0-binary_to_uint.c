#include "main.h"

int _pow(int a, int b);

/**
 *binary_to_uint - Converts binary to int
 *@b: Binary
 *
 *
 *Return: Int value of bin
 */
unsigned int binary_to_uint(const char *b)
{
	int i, index, result = 0, len = 0;

	if (b == NULL || !b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] > '1')
			return (0);
		len++;
	}
	index = len;
	i = 0;
	while (i < len)
	{
		unsigned int powr = _pow(2, index - 1);

		result += (b[i] - '0') * powr;
		i++;
		index--;
	}
	return ((unsigned int)result);
}

/**
 *_pow - Calculates base to the power of index
 *@a: Base
 *@b: Index
 *
 *
 *Return: Base to the power of index
 */
int _pow(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * _pow(a, b - 1));
}

