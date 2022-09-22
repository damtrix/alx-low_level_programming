#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @s: Check the input
 *
 * Return: 0
 */

char *cap_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 97 && s[c] <= 122)
		{
			if (c == 0)
			{
				s[c] -= 32;
			}

			if (s[c - 1] == 32 || s[c - 1] == 9 || s[c - 1] == 10
			    || s[c - 1] == 44 || s[c - 1] == 59
			    || s[c - 1] == 46 || s[c - 1] == 33
			    || s[c - 1] == 63 || s[c - 1] == 34
			    || s[c - 1] == 40 || s[c - 1] == 41
			    || s[c - 1] == 123 || s[c - 1] == 124)
			{
				s[c] -= 32;
			}
		}
		c++;
	}
	return (s);
}
