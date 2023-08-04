#include "main.h"
/**
 *_strcat - concatenates two strings
 *@src: string to concatenate
 *@dest: destination
 *Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[len] = src[j];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
