#include <stdio.h>
/**
 *print_to_98 - prints to 98
 *@n: starting point
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	printf("\n");
}
