#include "lists.h"
/**
 * print_dlistint - print elements of a double linked list
 * @h: pointer to first node of the double linked list.
 *
 * Return: The number of nodes in the double linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
