#include "lists.h"
#include <stddef.h>

/**
 *dlistint_len - Counts nodes in a dlistint_t list
 *@h: Pointer to node head
 *
 *
 *Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	if (h == NULL || !h)
		return (0);
	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
