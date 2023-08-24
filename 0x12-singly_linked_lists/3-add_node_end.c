#include "lists.h"

/**
 *_strlen - Calculates length of string
 *@s: Input string
 *
 *Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 *add_node_end -  Adds a new node at the end of a list_t list
 *@head: Current head
 *@str: String to be added to node
 *
 *Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode = (list_t *)malloc(sizeof(list_t));
	list_t *current = *head;

	if (endNode == NULL)
		return (NULL);
	endNode->str = strdup((char *)str);
	endNode->len = _strlen(endNode->str);
	endNode->next = NULL;

	if (*head == NULL)
	{
		*(head) = endNode;
		return (endNode);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = endNode;
	}
	return (endNode);
}
