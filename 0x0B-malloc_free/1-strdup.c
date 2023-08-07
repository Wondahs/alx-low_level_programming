#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter.
 *@str: Input string
 *Return: NULL if unsucessful, pointer to duplicate if successful.
 *
 *
 */
char *_strdup(char *str)
{
	char *string;
	int i;

	if (str == NULL)
		return (NULL);
	string = (char *)malloc(strlen(str) + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		string[i] = str[i];

	string[i] = '\0';

	return (string);
}
