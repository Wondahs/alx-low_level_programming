#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located
 * or -1 if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}

/**
 * recursive_binary - Helper function for advanced binary search
 * @array: is a pointer to the first element of the array to search in.
 * @left: Index of starting point
 * @right: Index of ending point
 * @value: value to search for
 * 
 * Return: Index of value,
 * -1 if value cannot be found.
*/
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t index, mid;

	if (right < left)
		return (-1);

	printf("Searching in array:");
	for (index = left; index <= right; index++)
	{
		printf(" %d", array[index]);
		if (index < right)
			printf(",");
	}
	printf("\n");

	mid = (right + left) / 2;
	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (recursive_binary(array, left, mid, value));
	return (recursive_binary(array, mid + 1, right, value));
}
