#include "main.h"
#include <stddef.h>
/**
 *_strchr - Returns a pointer to the first occurrence of c in s or NULL
 *@s: Input string
 *@c: Character
 *Return: s
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
