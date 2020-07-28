#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Add new node at end of a liked list.
 * @head: head of the linked list.
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tp = *head;

	if (*head == NULL)
		return;
	while (tp != NULL)
	{
		free(tp);
		tp = tp->next;
	}
	*head = NULL;
}
