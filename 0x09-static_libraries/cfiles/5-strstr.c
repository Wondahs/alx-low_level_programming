#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of a substring within a string.
 * @haystack: The main string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the first occurrence of 'needle' in 'haystack',
 *         or NULL if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (NULL);
}
