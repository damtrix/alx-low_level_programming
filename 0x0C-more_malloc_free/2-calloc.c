#include <stdlib h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: Check the input
 *
 * @b: Check the input
 *
 * @n: Check the input
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: Check the input
 *
 * @size: Check the input
 *
 * Return: pointer to str
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	_memset(str, 0, nmemb * size);

	return (str);
}
