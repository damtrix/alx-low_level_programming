#include "main.h"

/**
 * print_rev - a function that prints a string
 *             in reverse, followed by a new line.
 *
 * @s: check the input
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	while (c >= 0)
	{
		putchar(s[c]);
		c--;
	}
	putchar('\n');
}
