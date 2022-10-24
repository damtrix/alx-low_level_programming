#include "lists.h"

/**
 * print_listint - print the data in listint_t
 *
 * @h: the list header
 *
 * Return: the number data in listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 1;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		counter++;
	}
	printf("%d\n", h->n);
	return(counter);
}
