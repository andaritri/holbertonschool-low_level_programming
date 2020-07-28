#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  add_nodeint_end - Add new node at end of a liked list.
 * @head: head of the linked list.
 * @n: number integer.
 *
 * Return: Address memory of the node added.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
