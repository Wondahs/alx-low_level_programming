#include "lists.h"

/**
 *listint_len - A function that returns the number of elements
 *in a linked listint_t list.
 *@h: listint_h list
 *
 *
 *Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
