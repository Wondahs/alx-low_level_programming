#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - Function that concatenates two strings.
 *@s1: String 1
 *@s2: String 2
 *Return: Null on failure, pointer to a newly allocated space in memory
 *which contains the contents of s1, followed by the contents of s2,
 *and null terminated on success
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	string = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (string == NULL)
		return (NULL);
	strcpy(string, s1);
	strcat(string, s2);

	return (string);
}
