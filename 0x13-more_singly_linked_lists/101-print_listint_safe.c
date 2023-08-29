#include "lists.h"
#include <stdio.h>
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
			return (tortoise); /* Loop detected, return the meeting point */
	}

	return (NULL); /* No loop detected */
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *copy = NULL;
	listint_t *loop_node;
	size_t nodes = 0;

	if (head)
		copy = (listint_t *)head;

	loop_node = detect_loop(copy);

	if (loop_node == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		const listint_t *current = head;

		while (current != loop_node)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
			nodes++;
		}

		printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
		nodes++;
	}

	return (nodes);
}
