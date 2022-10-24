#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: the address of the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *newNode, *temp;

	if (head != NULL)
	{
		newNode = *head;

		while ((temp = newNode) != NULL)
		{
			newNode = newNode->next;
			free(temp);
		}

		*head = NULL;
	}
}
