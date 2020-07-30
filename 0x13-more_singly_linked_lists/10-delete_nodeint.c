#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at espcified index (idx).
 * @head: head of the linked list.
 * @index: index nth node.
 *
 * Return: 1 if it succedded, -1 it it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *temp;
	unsigned int idx = 0;

	temp = *head;
	if (!*head || !head || (!head && !index))
		return (-1);
	if (!index)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (idx < (index - 1))
	{
		temp = temp->next;
		if (!temp)
			return (-1);
		idx++;
	}
	aux = temp->next;
	temp->next = aux->next;
	free(aux);
	return (1);
}
