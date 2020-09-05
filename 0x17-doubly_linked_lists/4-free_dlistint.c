#include "lists.h"

/**
 * free_dlistint - free all of nodes of double linked list.
 * @head: pointer to first node.
 *
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
