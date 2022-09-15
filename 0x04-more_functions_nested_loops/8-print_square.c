#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: check the input
 *
 * Return: 0
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				putchar('#');
				b++;
			}
			putchar('\n');
			a++;
		}
	}
}
