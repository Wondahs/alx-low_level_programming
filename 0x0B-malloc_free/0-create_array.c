#include "main.h"
#include <stdlib.h>
/**
 *create_array - Create array of chars, and initializes
 *it with a specific char.
 *@size: array size
 *@c: Input char
 *Return: NULL if unsuccessful, pointer to array if successful
 *
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i;

	result = (char *)malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		result[i] = c;
	return (result);
}
