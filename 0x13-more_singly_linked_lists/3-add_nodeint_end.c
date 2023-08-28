#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: address of head element
 *@n: data for end node
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (endNode == NULL)
	{
		free(endNode);
		return (NULL);
	}

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = endNode;
	return(endNode);
}
