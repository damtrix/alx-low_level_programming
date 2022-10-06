#include <main.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: Check the input
 *
 * Return: 98 or the pointer to the alotted address
 */

void *malloc_checked(unsigned int b)
{
	int *l;

	l = malloc(b);
	if (l == NULL)
		exit(98);
	return (l);
}
