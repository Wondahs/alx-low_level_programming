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
		putchar(letter);
		putchar(' ');
	}
	putchar('\n');
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
