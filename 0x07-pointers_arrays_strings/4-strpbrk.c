#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input string
 *@accept: set of bytes
 *Return: 0
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *originalAccept = accept;

	while (*s)
	{
		accept = originalAccept;
		for ( ; *accept; accept++)
		{
			if (*accept == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
