#include "lists.h"

/**
 *delete_dnodeint_at_index - Deletes node at specified index
 *@head: Pointer to pointer to head node
 *@index: Index
 *
 *Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (!head || *head == NULL)
		return (-1);
	current = *head;

	while (current)
	{
		if (index == 0)
		{
			if (current->next)
				current->next->prev = NULL;
			*head = current->next;
			free(current);
			current = NULL;
			return (1);
		}
		if (index == i)
		{
			if (current->prev)
				current->prev->next = current->next;
			if (current->next)
				current->next->prev = current->prev;
			free(current);
			current = NULL;

			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
