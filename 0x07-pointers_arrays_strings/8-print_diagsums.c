#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sums of diagonals in an array
 *@a: input array
 *@size: size of array
 *
 */
void print_diagsums(int *a, int size)
{
	int i, revSum = 0, sum = 0;

	for (i = 0; i < size; i++)
		sum += a[i * size + i];
	for (i = size - 1; i >= 0; i--)
		revSum += a[i * size + (size - i - 1)];
	printf("%d, %d\n", sum, revSum);
}
