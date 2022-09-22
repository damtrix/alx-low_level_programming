#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: Check the input
 *
 * Return: s
 */

char *leet(char *s)
{
	int k, c;
	int uc[] = {65, 69, 79, 84, 76};
	int lc[] = {97, 101, 111, 116, 108};
	int l[] = {52, 51, 48, 55, 49};

	c = 0;
	while (s[c] != '\0')
	{
		for (k = 0; k < 5; k++)
		{
			if (s[c] == uc[k] || s[c] == lc[k])
			{
				s[c] = l[k];
				break;
			}
		}
		c++;
	}

	return (s);
}
