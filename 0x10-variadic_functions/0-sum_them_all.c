#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: A fixed length
 *
 * Return: return sum of variable or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}