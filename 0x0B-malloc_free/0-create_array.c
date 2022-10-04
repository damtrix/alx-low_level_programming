#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *        and initializes it with a specific char.
 *
 * @size: Check the input
 *
 * @c: Check the input
 *
 * Return: 0 or 1.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);
	while (size--)
		arr[size] = c;
	return (arr);
}
