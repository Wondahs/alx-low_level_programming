#include "main.h"
/**
 *_strncpy - copies n parts of src to dest
 *@src: source string
 *@dest: destination
 *@n: number of characters to copy
 *Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
