#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 *shash_table_create - Creates new shash table.
 *@size: Size of table
 *
 *
 *
 *Return: NULL if fail or new table if successful.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newTable;
	unsigned long int i;

	newTable = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (!newTable)
		return (NULL);

	newTable->size = size;
	newTable->array = (shash_node_t **)malloc(sizeof(shash_node_t) * size);
	if (!newTable->array)
		return (NULL);

	for (i = 0; i < newTable->size; i++)
		newTable->array[i] = NULL;

	newTable->shead = NULL;
	newTable->stail = NULL;

	return (newTable);
}


/**
 *shash_table_set - Sets items in a table
 *@ht: Table to add new value in.
 *@key: Key.
 *@value: Value.
 *
 *Return: 1 if successful, 0 Otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *newNode;
	unsigned long int index;
	char *n_value, *n_key;


	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;

	while (current)
	{
		if (strcpy(current->key, key))
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	newNode = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	if (ht->shead == NULL)
	{
		newNode->snext = NULL;
		newNode->sprev = NULL;
		ht->shead = newNode;
		ht->stail = newNode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newNode->sprev = NULL;
		newNode->snext = ht->shead;
		ht->shead->sprev = newNode;
		ht->shead = newNode;
	}
	else
	{
		current = ht->shead;
		while (current->next != NULL && strcmp(current->snext->key, key) < 0)
			current = current->next;
		newNode->sprev = current;
		newNode->snext = current->next;
		if (current->next == NULL)
			ht->stail = newNode;
		else
			current->snext->sprev = newNode;
		current->snext = newNode;
	}

	return (1);
}


/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
