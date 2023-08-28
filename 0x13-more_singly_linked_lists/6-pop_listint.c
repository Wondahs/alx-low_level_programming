#include "lists.h"

/**
 *pop_listint - Deletes the head node of a listint_t linked list
 *@head: Head node
 *
 *
 *
 *Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *oldHead = *head;
	listint_t *newHead = oldHead->next;
	int data = oldHead->n;

	if (oldHead == NULL)
		return (0);
	free(*head);
	oldHead = NULL;
	*head = newHead;
	return (data);
}
