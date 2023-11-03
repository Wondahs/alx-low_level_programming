#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *hash_table_delete - Frees hash_tables.
 *@ht: Hash table to free.
 *
 *
 *
 *Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;


	if (!ht || !ht->array)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current->next;
			free(current->key), free(current->value), free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
