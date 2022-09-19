#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: check the input
 *
 * @b: check the input
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int p  = *a;

	*a = *b;
	*b = p;
}
