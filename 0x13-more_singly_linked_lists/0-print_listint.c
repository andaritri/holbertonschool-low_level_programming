#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all of a elements in a liked list.
 * @h: head of the linked list.
 *
 * Return: number of nodes of the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
