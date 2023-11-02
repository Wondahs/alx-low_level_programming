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
    int h;

    ht = hash_table_create(1024);
    h = hash_table_set(ht, "betty", "cool");

    if (h == 1)
	    printf("worked\n");
    else
	    printf("oops\n");
    return (EXIT_SUCCESS);
}
