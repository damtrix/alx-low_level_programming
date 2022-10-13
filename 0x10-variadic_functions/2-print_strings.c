#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: a string to be printed between numbers
 *
 * @n: is the number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
