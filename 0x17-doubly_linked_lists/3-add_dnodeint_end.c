#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a double linked list
 * @head: pointer to first node of the double linked list
 * @n: number to store in the new node.
 *
 * Return: address memory of the new node added.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new  = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *head;
	if (!*head)
	{
		new->prev = *head;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; tmp->next != NULL; tmp = tmp->next)
	{}
	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
