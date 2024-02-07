#include "search_algos.h"

/**
 *@list: is a pointer to the head of the list to search in.
 *@size: is the number of nodes in list.
 *@value: is the value to search for.
 *
 *
 * Return - value is not present in head or if head is NULL,
 * function will return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, low_index = 0, high;
	listint_t *current = NULL, *low = NULL, *end = NULL;

	if (list == NULL)
		return NULL;

	step = sqrt(size);
	high = step;
	current = list;
	low = list;
	while (high < size)
	{
		while (current && current->index < high)
			current = current->next;
		while (low->index < low_index)
			low = low->next;
		printf("Value checked at index [%ld] = [%d]\n", high, current->n);
		if (value < current->n)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low_index, high);
			while (low_index <= high)
			{
				printf("Value checked at index [%ld] = [%d]\n", low_index, low->n);
				if (low->n == value)
					return (low);
				low = low->next;
				low_index++;
			}
		}
		low_index = high;
		high += step;
	}
	end = low;
	while (end->next)
		end = end->next;
	printf("Value checked at index [%ld] = [%d]\n", size - 1, end->n);
	printf("Value found between indexes [%ld] and [%ld]\n", low_index, size - 1);

	return (finish_jump_list(low, low_index, size, value));
}

/**
 * finish_jump_list - Finisher for jump_list
 * @low: Low node
 * @low_index: Low index
 * @size: Size of array
 * @value: Value to search for
 *
 * Return - Index of value or NULL if value not found.
*/
listint_t *finish_jump_list(listint_t *low, size_t low_index, size_t size, int value)
{
	while (low_index < size && low)
	{
		while (low->index < low_index)
			low = low->next;
		printf("Value checked at index [%ld] = [%d]\n", low_index, low->n);
		if (low->n == value)
			return (low);
		low = low->next;
		low_index++;
	}
	return (NULL);
}
