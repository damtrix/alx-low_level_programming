#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @s: Check the input
 *
 * Return: s
 */

char *rot13(char *s)
{
	int c, k;
	char r[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; s[c] != '\n'; c++)
	{
		for (k = 0; r[k] != '\n'; k++)
		{
			if (s[c] == r[k])
			{
				s[c] = e[k];
				break;
			}
		}
	}
	return (s);
}
