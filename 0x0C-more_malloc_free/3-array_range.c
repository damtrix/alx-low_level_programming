#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: Check the input
 *
 * @max: Check the input
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
