#include "lists.h"

/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list
 *@head: Head node
 *@index: n
 *
 *
 *Return: nth node, NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
