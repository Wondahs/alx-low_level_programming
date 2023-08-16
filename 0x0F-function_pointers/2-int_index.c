#include "function_pointers.h"

/**
 *int_index - function that searches for an integer in an array
 *@array: pointer to input array
 *@size: size of array
 *@cmp: pointer to comparison function
 *
 *Return: the index of the first element
 *for which the cmp function does not return 0
 *If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
