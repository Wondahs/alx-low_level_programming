#include <stdio.h>
/**
 *main - Prints command line arguments
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n;

	n = argc;
	for (i = 0; i < n; i++)
		printf("%s\n", argv[i]);
	return (0);
}
