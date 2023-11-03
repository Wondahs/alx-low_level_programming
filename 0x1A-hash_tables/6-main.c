#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "me", "you");
    hash_table_set(ht, "heliotropes", "yes");
    hash_table_set(ht, "neurospora", "collide");
    hash_table_set(ht, "stylist", "style");
    hash_table_print(ht);
    hash_table_set(ht, "stylist", "stile");
    hash_table_set(ht, "subgenera", "tyle");
    hash_table_print(ht);
    hash_table_delete(ht);
    return 0;
}
