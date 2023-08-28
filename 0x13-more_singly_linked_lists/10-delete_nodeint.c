#include "lists.h"

/**
 *delete_nodeint_at_index - Delete node at index index of listint_t linked list
 *@head: Address of head node
 *@index: Index of node to delete
 *
 *Return: 1 if successful, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *previous = NULL;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index)
		{
			previous->next = current->next;
			free(current);
			current = NULL;
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (-1);
}
