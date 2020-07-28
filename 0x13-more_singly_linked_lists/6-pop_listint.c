#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Add new node at end of a liked list.
 * @head: head of the linked list.
 *
 * Return: nothing.
 */

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int data;

	if (*head == NULL)
		return (0);
	tp = *head;
	data = tp->n;
	*head = tp->next;
	free(tp);
	return (data);
}
