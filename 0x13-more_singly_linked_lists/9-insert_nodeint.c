#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a node at espcified index (idx).
 * @head: head of the linked list.
 * @idx: index nth node.
 * @n: number integer.
 *
 * Return: Address memory of the new node or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int index;

	index = 0;
	temp = *head;
	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (temp->next == NULL && idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (temp->next == NULL && idx > 0)
		return (NULL);
	while (index != (idx - 1))
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (NULL);
		index++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
