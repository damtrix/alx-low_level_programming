#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers
 *               from n to 98, followed by a new line.
 *
 * @n: check the input
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n <= 9)
			putchar(n + '0');
		else
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
}
