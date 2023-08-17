#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Custom printf-like function to print values based on format specifiers.
 * @format: A string containing format specifiers for values to be printed.
 *          Supported specifiers: 'c' (char), 'i' (int), 'f' (float), 's' (string).
 *          Any other characters are ignored.
 *          Use format(i) to specify the argument index.
 * @...: Values to be printed based on the format specifiers.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				putchar(va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
			{
				char *string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
			}
			break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}

	printf("\n");
	va_end(args);
}
