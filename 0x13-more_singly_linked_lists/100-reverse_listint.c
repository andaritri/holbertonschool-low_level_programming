#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse a linked list.
 * @head: head of the linked list.
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev = NULL;

	if (*head == NULL)
		return (*head);
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
