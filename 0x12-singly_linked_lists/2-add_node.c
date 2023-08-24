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
 *add_node - Adds a new node at the beginning of a list_t list
 *@head: Current head
 *@str: String to be added to node
 *
 *Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc((sizeof(list_t)));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup((char *)str);
	newNode->len = _strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
