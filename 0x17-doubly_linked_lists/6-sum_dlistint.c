#include "lists.h"

/**
 *sum_dlistint - Sums data in a dlistint_t list.
 *@head: Pointer to first node
 *
 *
 *
 *Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current;

	if (head == NULL || !head)
		return (0);
	current = head;
	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}
	
	return (total);
}
