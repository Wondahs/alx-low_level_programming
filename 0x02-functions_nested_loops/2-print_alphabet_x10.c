#include <stdio.h>
/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
