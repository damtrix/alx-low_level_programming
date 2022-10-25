#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 *                         nth node of a listint_t linked list.
 *
 * @head: pointer to the first node of the list
 *
 * @index: no of node to access
 *
 * Return: node at nth index OR NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
