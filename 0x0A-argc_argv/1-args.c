#include <stdio.h>
/**
 *main - Prints number of command-line arguments
 *@argc: Number of arguments
 *@argv: Arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
