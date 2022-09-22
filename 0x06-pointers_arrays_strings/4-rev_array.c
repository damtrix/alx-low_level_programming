#include "main.h"

/**
 * reverse_array - a function that reverses
 *                 the content of an array of integers.
 *
 * @a: Check the input
 *
 * @n: Check the input
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int c, k;
	int b;

	k = n - 1;

	c = 0;
	while (c < k)
	{
		b = a[c];
		a[c] = a[k];
		a[k] = b;
		c++;
		k--;
	}
}
