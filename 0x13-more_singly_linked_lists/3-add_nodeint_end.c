#include "lists.h"

/**
 * add_nodeint_end- a function that adds a
 *                  new node at the end of a listint_t list.
 *
 * @head: the address of the head of the list
 *
 * @n: The data to be added
 *
 * Return: the address of the head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;
	temp = *head;

	if (temp == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (*head);
}
