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
	listint_t *new, *temp;
	unsigned int index = 0;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL && idx == 0)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (index < (idx - 1))
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		index++;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
