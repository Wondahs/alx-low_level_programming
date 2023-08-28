#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts node at given position
 *@head: Head node
 *@idx: Position to insert node
 *@int: Data to insert
 *
 *Return: Address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmp;
	listint_t *current = *head;
	unsigned int i = 0;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			tmp = current->next;
			current->next = newNode;
			newNode->next = tmp;
			return (newNode);
		}
		i++;
		current = current->next;
	}
	free(newNode);
	return (NULL);
}
