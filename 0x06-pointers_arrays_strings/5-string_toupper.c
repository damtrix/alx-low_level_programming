#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string
 *
 * @s: Check the input
 *
 * Return: 0
 */

char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 97 && s[c] <= 122)
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
