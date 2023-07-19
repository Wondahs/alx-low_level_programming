#include <stdio.h>
/**
 *print_times_table - timestable
 *@n: input
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
			{
				printf("%d, ", k);
			}
			else if (j != 0)
			{
				printf(" %2d", k);
				if (j < n)
				{
					printf(", ");
				}
			}
		}
	printf("\n");
	}
}

