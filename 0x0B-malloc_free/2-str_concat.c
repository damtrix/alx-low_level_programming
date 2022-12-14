#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - the lenght of a string
 *
 * @s: Check the input
 *
 * Return: k
 */


int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}

/**
 * *str_concat - a function that concatenates two strings.
 *
 * @s1: Check the input
 *
 * @s2: Check the input
 *
 * Return: s
 */

char *str_concat(char *s1, char *s2)
{
	int f, j, l;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	f = _strlen(s1);
	j = _strlen(s2);
	s = malloc((f + j) * sizeof(char) + 1);
	if (s == 0)
		return (0);

	for (l = 0; l <= f + j; l++)
	{
		if (l < f)
			s[l] = s1[l];
		else
			s[l] = s2[l - f];
	}
	s[l] = '\0';
	return (s);
}
