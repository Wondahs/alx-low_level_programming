#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @s: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *s)
{
	int flag = 0, c, word_count = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (Success),
 *         or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, index = 0, len = 0, word_count, c = 0, start, end;

	while (*(str + len))
		len++;
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[index] = tmp - c;
				index++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[index] = NULL;

	return (matrix);
}
