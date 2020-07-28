#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  add_nodeint - Add new node at begining of a linked list.
 * @head: head of the linked list.
 * @n: number integer.
 *
 * Return: Address memory of the node added.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
