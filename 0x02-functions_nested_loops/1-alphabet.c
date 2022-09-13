#include "main.h"

/**
 * print_alphabet: a function that prints the alphabet,
 *              in lowercase, followed by a new line.
 *
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
