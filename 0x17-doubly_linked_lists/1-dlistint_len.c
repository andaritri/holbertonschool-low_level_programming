#include "lists.h"

/**
 * dlistint_len - Calculate the lenght of a double linked list.
 * @h: pointer to first node of the double linked list.
 *
 * Return: Number of node of the double linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++, h = h->next)
	{}
	return (count);
}
