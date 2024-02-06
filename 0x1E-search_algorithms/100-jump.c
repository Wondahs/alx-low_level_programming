#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 *
 * Return: first index where value is located
 * or -1 if array is NULL.
*/
int jump_search(int *array, size_t size, int value)
{
	int step, index = 0, mindex, high;

	if (array == NULL)
		return (-1);
	step = (int)sqrt(size);
	while (index < (int)size)
	{
		high = index + step;
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (high < (int)size && array[high] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", index, high);
			for (mindex = index; mindex <= high; mindex++)
			{
				printf("Value checked array[%d] = [%d]\n", mindex, array[mindex]);
				if (array[mindex] == value)
					return (mindex);
			}
		}
		index += step;
	}
	index -= step;

	printf("Value found between indexes [%d] and [%d]\n", index, high);
	for (; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
