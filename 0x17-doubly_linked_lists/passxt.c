#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *pass = malloc(sizeof(char) * 5);
	char c[14] = {'e', 'n', ' ', 'C', ' ', 'P', 'y', 'f', 'o', ' ', 'n', 'e', 'Z', '\0'}, run[100];
	int i;

	for (i = 0; c[i]; i++)
		pass[i] = c[i];

	pass[i] = '\0';

	sprintf(run, "echo %s > 100-password", pass);
	system(run);

	return (0);
}
