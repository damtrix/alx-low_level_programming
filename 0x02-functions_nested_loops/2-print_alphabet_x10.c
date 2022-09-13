#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the
 *     alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet_X10(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
