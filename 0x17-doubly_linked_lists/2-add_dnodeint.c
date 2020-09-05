#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a double linked list.
 * @head: pointer to first node of the double linked list.
 * @n: integer number to store in the new node.
 *
 * Return: Address memory of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		new->prev = *head;
		new->next = *head;
		*head = new;
		return (new);
	}
	new->prev = (*head)->prev;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
