#include "main.h"
/**
 *string_toupper - converts lowercase to uppercase
 *@str: input string
 *Return: Uppercase version of input
 *
 *
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
