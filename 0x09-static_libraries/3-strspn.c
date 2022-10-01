#include "main.h"

/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: Check the input
 *
 * @accept: Check the input
 *
 * Return: (i)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
