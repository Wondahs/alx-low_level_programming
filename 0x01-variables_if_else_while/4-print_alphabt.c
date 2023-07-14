#include <stdio.h>
/**
 * main - Entry point
 * Return: Returns 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
