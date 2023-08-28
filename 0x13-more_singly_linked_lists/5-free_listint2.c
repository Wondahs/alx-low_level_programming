#include "lists.h"

/**
 *free_listint2 - Frees a listint_t list
 *sets head to null
 *
 *
 *
 *Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current = *head;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = NULL;
		current = tmp;
	}
	*head = NULL;
}
		
