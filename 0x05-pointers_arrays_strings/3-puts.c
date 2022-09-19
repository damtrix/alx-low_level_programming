#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: check the input
 *
 * Return: 0
 */

void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		putchar(str[c]);
		c++;
	}
	putchar('\n');
}
