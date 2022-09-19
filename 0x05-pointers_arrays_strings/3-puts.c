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
	char k;
	int c;

	c = 0;
	while (str[c])
	{
		write(1, &str[c], 1);
		c++;
	}
}
