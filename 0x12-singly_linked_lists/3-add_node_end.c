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
 *_strdup - Duplicates string
 *@s: Input string
 *
 *Return: Duplicated string
 */
char *_strdup(char *s)
{
	int i, len = 0;
	char *dup;

	while (s[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc(len + 1);
	for (i = 0; i <= len; i++)
	{
		dup[i] = s[i];
	}
	dup[i] = '\0';
	return (dup);
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
	endNode->str = _strdup((char *)str);
	endNode->len = _strlen(endNode->str);
	endNode->next = NULL;

	if (*head == NULL)
		*(head) = endNode;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = endNode;
	}
	return (endNode);
}
