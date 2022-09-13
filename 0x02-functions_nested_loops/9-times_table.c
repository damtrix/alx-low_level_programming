#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0.
 *
 * Return: 0
 */

void times_table(void)
{
	int n, m, k;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			k = n * m;
			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
