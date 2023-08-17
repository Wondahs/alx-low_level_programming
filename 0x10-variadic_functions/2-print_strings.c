#include "variadic_functions.h"

/**
 *print_strings - Print strings
 *@n: Number of strings
 *@separator: Separating character
 *
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *text = va_arg(args, char *);

		if (text == NULL)
			printf("(nil)");
		else
			printf("%s", text);
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
