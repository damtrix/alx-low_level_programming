#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * @s: Check the input
 *
 * Return: n
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s > '\0')
		i += _strlen_recursion(s + 1) + 1;
	return (i);
}
