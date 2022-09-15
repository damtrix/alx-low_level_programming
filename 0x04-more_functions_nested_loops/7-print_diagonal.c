#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: check the input
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int a, b;

	a = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (a < n)
	{
		b = 0;
		while (b <= a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}
