#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node in a given index.
 * @h: pointer to first node.
 * @idx: index where will inserted the new node.
 * @n: data to store in the new node.
 *
 * Return: pointer to new node added.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *tmp, *new;

	if (!idx || !*h)
		return (add_dnodeint(h, n));
	if ((*h)->next == NULL && idx == 1)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h;
	for (; tmp != NULL; index++, tmp = tmp->next)
	{
		if (index == idx)
		{
			new->next = tmp->prev->next;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (new);
		}
	}
	if (index == idx)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
