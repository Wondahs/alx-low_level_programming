#include "main.h"
#include <stdlib.h>

/**
 *array_range - Create an array with elements ranging from min to max.
 *@min: Lowest value.
 *@max: Highest value.
 *
 *Return: Array, NULL on fail.
 */
 int *array_range(int min, int max)
{
	int *arr;
	int i;
	int val = min;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = val;
		val++;
	}
	return (arr);
}
