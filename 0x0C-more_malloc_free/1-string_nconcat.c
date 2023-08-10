#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - Joins n characters of s2 to s1.
 *@s1: String 1.
 *@s2: String 2.
 *@n: Number of s2 characters to join.
 *
 * Return: Concatenated string, Null if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int cpy = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		cpy = len2;
	else if (n < len2)
		cpy = n;
	string = (char *)malloc(len1 + cpy + 1);
	if (string == NULL)
		return (NULL);
	while (i < len1)
	{
		string[i] = s1[i];
		i++;
	}
	while (j < cpy)
	{
		string[len1 + j] = s2[j];
		j++;
	}
	string[len1 + j] = '\0';
	return (string);
}
