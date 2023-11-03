#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_table_print - Prints content of hash_tables.
 *@ht: Hash table to print.
 *
 *
 *
 *Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char *sep = "";


	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("%s'%s': '%s'", sep, current->key, current->value);
			sep = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
