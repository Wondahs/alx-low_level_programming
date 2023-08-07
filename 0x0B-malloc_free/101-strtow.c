#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int flag = 0, c, word_count = 0;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
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
 * strtow - Splits a string into an array of words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (Success),
 *         or NULL (Error).
 */
char **strtow(char *str)
{
	char **word_matrix, *tmp;
	int i, matrix_index = 0, len = 0, words = 0, c = 0, start = 0, end = 0;
	int j;

	while (str[len] != '\0')
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	word_matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (word_matrix == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				for (j = start; j < end; j++)
					tmp[j - start] = str[j];
				tmp[c] = '\0';
				word_matrix[matrix_index] = tmp;
				matrix_index++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	word_matrix[matrix_index] = NULL;

	return (word_matrix);
}
