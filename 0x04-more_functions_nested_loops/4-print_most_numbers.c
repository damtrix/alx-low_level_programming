#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 *                      from 0 to 9, followed by a new line.
 *                      Do not print 2 and 4.
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}

	_putchar('\n');
}
