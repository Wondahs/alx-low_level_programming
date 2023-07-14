#include <stdio.h>
/**
 * main - Entry point
 * Return: Returns 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
