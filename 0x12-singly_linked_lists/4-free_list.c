#include "lists.h"

/**
 *free_list -  Function that frees a list_t list.
 *@head: Node in a list
 *
 *
 *Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
