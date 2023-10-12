#include "lists.h"

/**
 *print_dlistint - Prints data in a dlistint_t list
 *@h: Head of list
 *
 *
 *
 *Return: Number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	if (h == NULL || !h)
		return (0);

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
