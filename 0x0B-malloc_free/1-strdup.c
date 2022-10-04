#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer
 *            to a newly allocated space in memory,
 *            which contains a copy of the string
 *            given as a parameter
 *
 * @str: Check the input
 *
 * Return: NULL or arr
 */

char *_strdup(char *str)
{
	int k, s = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	while (str[s] != '\0')
	{
		s++;
	}
	arr = malloc(s * sizeof(*str) + 1);

	if (arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < s; k++)
			arr[k] = str[k];
	}
	return (arr);
}
