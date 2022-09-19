#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: check the input
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int c, i;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
	{
		for (i = c / 2; str[i] != '\0'; ++i)
			_putchar(str[i]);
	}
	else
	{
		for (i = ((c - 1) / 2) + 1; str[i] != '\0'; ++i)
			_putchar(str[i]);
	}
	_putchar('\n');
}
