#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: Check the input
 *
 * @old_size: Check the input
 *
 * @new_size: Check the input
 *
 * Return: n_ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr, *t_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		n_ptr = malloc(new_size);
		if (n_ptr == NULL)
			return (NULL);
		free(ptr);
		return (n_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
		return (NULL);

	t_ptr = ptr;

	for (i = 0; i < old_size; i++)
		n_ptr[i] = t_ptr[i];

	free(ptr);
	return (n_ptr);
}
