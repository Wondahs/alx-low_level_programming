#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 0 if strings are similar, character difference at first dissimilarity
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
