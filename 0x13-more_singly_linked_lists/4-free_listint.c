#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 *
 * @head: the address of the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
