#include "lists.h"

/**
 *add_dnodeint - Adds new node at the head of a dlistint_t list
 *@head: Pointer to Pointer to first node
 *@n: Data at node
 *
 *Return: Pointer to head node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	/* if (!(*head)) */
		/*return (NULL);*/

	current = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = current;
	newNode->prev = NULL;
	(*head) = newNode;

	return (*head);
}
