#include "main.h"
#include <stdlib.h>
/**
 *_memset - fills memory with constant byte
 *@s: pointer to memory area
 *@b: constant byte
 *@n: number of byte
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 *_calloc - Allocates memory for an array, using malloc.
 *@nmemb: Number of array members.
 *@size: Size of array.
 *
 *Return: Arr, or NULL if fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);
	return (arr);
}
