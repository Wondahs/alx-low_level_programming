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
	listint_t *newHead = (*head)->next;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	free(*head);
	*head = newHead;
	return (data);
}
