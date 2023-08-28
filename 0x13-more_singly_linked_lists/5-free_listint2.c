#include "lists.h"

/**
 *free_listint2 - Frees a listint_t list
 *sets head to null
 *@head: Address of head node
 *
 *
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	*head = NULL;
}
