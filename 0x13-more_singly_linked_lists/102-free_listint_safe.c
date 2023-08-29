#include "lists.h"
#include <stdlib.h>

/**
 * detect_loop - Detects a loop in a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The node where the loop starts, or NULL if no loop
 */
listint_t *detect_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
			return (tortoise);
	}

	return (NULL);
}

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *loop_node = detect_loop(*h);

	if (*h == NULL)
		return (0);

	if (loop_node == NULL)
	{
		listint_t *current = *h;
		listint_t *tmp;

		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp);
			nodes++;
		}

		*h = NULL;
	}
	else
	{
		listint_t *current = *h;
		listint_t *tmp;

		while (current != loop_node)
		{
			tmp = current;
			current = current->next;
			free(tmp);
			nodes++;
		}

		*h = NULL;
	}

	return (nodes);
}
