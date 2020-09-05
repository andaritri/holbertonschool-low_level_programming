#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node in a given position.
 * @head: pointer to first node.
 * @index: index of the pointer to delete.
 *
 * Return: 1 if success, -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *back, *front;
	unsigned int idx = 0;

	if (!*head || !head || (!head && !index))
		return (-1);
	back = *head;
	if (!index)
	{
		if (!back->next)
			*head = back->next;
		else
		{
			back->next->prev = (*head)->prev;
			*head = back->next;
		}
		free(back);
		return (1);
	}
	for (; idx < index - 1; idx++)
	{
		back = back->next;
		if (!back)
			return (-1);
	}
	front = back->next;
	if (!front->next)
		back->next = front->next;
	else
	{
		back->next = front->next;
		front->next->prev = back;
	}
	free(front);
	return (1);
}
