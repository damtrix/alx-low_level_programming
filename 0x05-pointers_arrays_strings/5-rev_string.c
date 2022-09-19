#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: check the input
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int c, i;
	char ch;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	i = c / 2;
	while (i < c)
	{
		ch = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = ch;
		i++;
	}
}
