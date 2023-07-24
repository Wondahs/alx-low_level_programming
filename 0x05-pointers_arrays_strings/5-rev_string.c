#include "main.h"
/**
 *rev_string - reverses input string
 *@s: input string
 *
 */
void rev_string(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = j;
	}
}
