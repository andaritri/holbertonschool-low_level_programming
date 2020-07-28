#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Return the node in the specified index..
 * @head: head of the linked list.
 * @index: index nth node.
 *
 * Return: node in the index nth.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	idx = 0;
	if (head == NULL)
		return (NULL);
	while (idx != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		idx++;
	}
	return (head);
}
