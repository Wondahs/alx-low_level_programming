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
	size_t low = 0, high = size - 1, mid, i;

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


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 *
 *
 * Return: the first index where value is located
 * or -1 if value isnt present or array is null.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t step, low, high;
	int result;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", 1, array[1]);
	if (array[1] == value)
		return (1);
	step = 2;
	low = 1;
	while (step < size)
	{
		/*printf("Value checked array[%ld] = [%d]\n", step, array[step]);*/
		high = step - 1;
		if (array[high] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, step);
			return (low + binary_search(array + low, step - low + 1, value));
		}
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		low = step;
		step *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, step - 1);
	result = binary_search(array + low, size - low, value);
	if (result == -1)
		return (-1);
	else
		return (low + result);
}
