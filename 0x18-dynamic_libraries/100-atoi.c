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
