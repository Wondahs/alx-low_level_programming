#include "lists.h"

/**
 *check_length - Counts node in a list.
 *@h: First node
 *
 *Return: Number of nodes in a list.
 */
int check_length(dlistint_t *h)
{
	int length = 0;
	dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	while (current->next)
	{
		length++;
		current = current->next;
	}
	return (length);
}


/**
 *insert_dnodeint_at_index - Inserts nodw at specified index
 *@h: Pointer to pointer to first node.
 *@idx: Index where new node will be added.
 *@n: Data to add.
 *
 * Return: Address of new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, length = 0;
	dlistint_t *current, *temp, *newNode;

	current = *h;
	length = check_length(current);
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	if (idx == length)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	while (i < length)
	{
		if (i == idx)
		{
			temp = current->prev;
			current->prev = newNode;
			newNode->next = current;
			newNode->prev = temp;
			temp->next = newNode;
			return (newNode);
		}
		current = current->next;
		i++;
	}
	free(newNode);
	return (NULL);
}
