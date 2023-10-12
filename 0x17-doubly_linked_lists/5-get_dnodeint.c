#include "lists.h"

/**
 *get_dnodeint_at_index - Retrieves node at given index
 *@head: Pointer to head node
 *@index: Given index
 *
 * Return: Address of node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL || !head)
		return (NULL);
	current = head;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
