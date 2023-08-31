#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index (index)
 * @n: Unsigned long integer
 * @index: Index of the bit to retrieve
 *
 * Return: Value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & mask) ? 1 : 0);
}
