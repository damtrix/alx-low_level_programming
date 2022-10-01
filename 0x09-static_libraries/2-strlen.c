#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: check the input
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
