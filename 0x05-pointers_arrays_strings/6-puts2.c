#include "main.h"

/**
 * puts2 - a function that prints every other character of string,
 *         starting with the first character, followed by a new line
 *
 * @str: check the input
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
