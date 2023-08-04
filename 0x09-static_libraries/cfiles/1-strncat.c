#include "main.h"
/**
 *_strncat - concatenates n number of strings in source into destination
 *@src: source
 *@dest: destination
 *@n: number of strings
 *Return: concatenated string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len] = src[j];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
