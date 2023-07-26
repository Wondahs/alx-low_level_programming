#include "main.h"
/**
 *reverse_array - reverses an array
 *@a: array
 *@n: number of elements in array
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i <= n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
