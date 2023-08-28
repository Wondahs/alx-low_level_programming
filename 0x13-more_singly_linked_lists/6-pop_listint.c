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
	listint_t *newHead;
	int data;

	if (!head || !*head)
		return (0);

	newHead = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = newHead;
	return (data);
}
