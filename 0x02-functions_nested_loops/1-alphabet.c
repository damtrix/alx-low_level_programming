#include "main.h"

/**
 * main - Entry point
 *
 * Description: a function that prints the alphabet,
 *              in lowercase, followed by a new line.
 *
 * Return: 0
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
