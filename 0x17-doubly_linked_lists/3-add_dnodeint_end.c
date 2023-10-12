#include "lists.h"

/**
 *add_dnodeint_end - Adds new node at end of dlistint_t list
 *@head: Pointer to pointer to first node
 *@n: Data for new node
 *
 *Return: Pointer to head nodeor NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
		newNode->prev = current;
	}
	return (*head);
}
