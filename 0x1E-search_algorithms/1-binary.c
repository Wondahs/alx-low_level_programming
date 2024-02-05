#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located
 * or -1 if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array:");
		for (i = low; i < high + 1; i++)
		{
			printf(" %d", array[i]);
			if (i < high)
				printf(",");
		}
		printf("\n");
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
