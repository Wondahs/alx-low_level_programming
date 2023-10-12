#include "lists.h"

/**
 *free_dlistint - Frees dlistint_t list
 *@head: Pointer to head node.
 *
 *
 *
 *Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current;

	if (!head || head == NULL)
		return;
	current = head;

	if (current->next == NULL)
	{
		free(current);
		current = NULL;
		return;
	}
	while (current->next != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		temp = NULL;
	}
	free(current);
	current = NULL;
}
