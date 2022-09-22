#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: Check the input
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		c = -n;
		_putchar('-');
	}
	else
	{
		c = n;
	}

	if (c / 10)
		print_number(c / 10);

	_putchar((c % 10) + '0');
}
