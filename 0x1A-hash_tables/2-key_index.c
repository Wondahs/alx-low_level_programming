#include "hash_tables.h"

/**
 *key_index - Gives the index of a key
 *@key: is the key
 *@size: size of array of hash table.
 *
 *Return: index at which the key/value pair should
 *be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash_result;


	hash_result = hash_djb2(key);
	index = hash_result % size;

	return (index);
}
