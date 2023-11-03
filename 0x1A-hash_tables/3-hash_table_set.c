#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 *hash_table_set - adds an element to the hash table.
 *@ht: hash table
 *@key: key to set
 *@value: value to set
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *newNode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	newNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->value = strdup(value);
	newNode->key = strdup(key);
	newNode->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newNode;
		return (1);
	}
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			free(newNode->value), free(newNode->key), free(newNode);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
