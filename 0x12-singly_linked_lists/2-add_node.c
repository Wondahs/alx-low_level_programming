#include "lists.h"

/**
 *
 *
 *
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 *
 *
 *
 *
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
 *
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc((sizeof(list_t)));
	if (newNode == NULL)
		return (NULL);
	newNode->str = _strdup((char *)str);
	newNode->len = _strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
