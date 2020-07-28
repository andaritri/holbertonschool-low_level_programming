#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  listint_len - Calcuate the number of nodes in a linked list.
 * @h: head of the linked list.
 *
 * Return: number of nodes of the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
