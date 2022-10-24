#include "lists.h"

/**
 * listint_len - a function that returns the number
 *               of elements in a linked listint_t list.
 *
 * @h: the head of the list
 *
 * Return: the number data in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
