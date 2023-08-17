#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 *print_numbers - Prints numbers
 *@separator: Separator between numbers
 *@n: Number of numbers
 *
 *Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		return;
	else
	{
		for (i = 0; i < n; i++)
		{
			int num = va_arg(args, int);

			printf("%i", num);
			if (!(i == n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
