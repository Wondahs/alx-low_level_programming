#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - Variadic function that sums numbers
 *@n: Number of numbers to sum
 *
 *
 *
 *Return: Total sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total = 0;


	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		total += num;
	}
	va_end(args);

	return (total);
}
