#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest: destination memory area
 *@scr: source memory area
 *@n: number of bytes to copy
 *Return: copied destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}