#include <stdio.h>
/**
 * _isupper - checks for uppercase characters
 * @c: input
 * Return: 1 if upper, 0 if lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@s: pointer to memory area
 *@b: constant byte
 *@n: number of byte
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
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
#include <stdio.h>
/**
 * _isdigit - checks for digit
 * @c: Input
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest: destination memory area
 *@src: source memory area
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
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Input string.
 *
 * Return: The converted integer. If no valid integer is found, return 0.
 */
int _atoi(char *s)
{
	int index = 0;
	int minus_count = 0;
	int num = 0;
	int length = 0;
	int found_digit = 0;
	int current_digit;

	while (s[length] != '\0')
		length++;

	while (index < length && found_digit == 0)
	{
		if (s[index] == '-')
			++minus_count;

		if (s[index] >= '0' && s[index] <= '9')
		{
			current_digit = s[index] - '0';
			if (minus_count % 2)
				current_digit = -current_digit;
			num = num * 10 + current_digit;
			found_digit = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			found_digit = 0;
		}
		index++;
	}

	if (found_digit == 0)
		return (0);

	return (num);
}
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
	for ( ; *s >= '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
#include "main.h"

/**
 *_strlen - returns length of string
 *@s: input string
 *Return: length of string
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
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
/**
 * _islower - checks if a character is a lowercase
 * @c: input
 * Return: Returns 1 if lowercase and 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
#include "main.h"

/**
 *_puts - Prints a string
 *@str: input string
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: string 1
 *@s2: string 2
 *Return: 0 if strings are similar, character difference at first dissimilarity
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
#include "main.h"

/**
 * _strspn - Gets the length of the initial segment of a string
 * @s: The input string.
 * @accept: The set of accepted characters.
 *
 * Return: The number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}
/**
 * _isalpha - checks if a character is an alphabet
 * @c: character to check
 * Return: Returns 1 if alphabet and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
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
	return (NULL);
}
#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of a substring within a string.
 * @haystack: The main string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the first occurrence of 'needle' in 'haystack',
 *         or NULL if 'needle' is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (NULL);
}
#include "main.h"
/**
 * _abs - returns absolute value of integer
 * @i: input integer
 * Return: Returna absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
#include "main.h"
/**
 *_strcpy - copies string from source to destination
 *@dest: destination
 *@src: source
 *Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
