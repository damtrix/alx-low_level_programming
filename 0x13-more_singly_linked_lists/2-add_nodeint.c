#include "lists.h"

/**
 * add_nodeint - a function that returns the number
 *               of elements in a linked listint_t list.
 *
 * @head: the address of the head of the list
 *
 * @n: The data to be added
 *
 * Return: the address of the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;

	newNode->n = n;
	*head = newNode;

	return (*head);
}
