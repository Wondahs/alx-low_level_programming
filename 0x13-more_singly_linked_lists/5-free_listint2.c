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
	listint_t *current = *head;

	if (*head == NULL)
		return;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	current = NULL;
}
