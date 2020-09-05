#include "lists.h"

/**
 * get_dnodeint_at_index - get the node located in the given index.
 * @head: pointer to first node.
 * @index: index of the node to get.
 *
 * Return: pointer to node located in index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (!head)
		return (NULL);
	for (; head != NULL; idx++, head = head->next)
	{
		if (index == idx)
			return (head);
	}
	return (NULL);
}
