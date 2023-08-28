#include "lists.h"

/**
 *sum_listint - Sums all the data in a listint_t linked list
 *@head: Head node
 *
 *
 *Return: Sum of data, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
