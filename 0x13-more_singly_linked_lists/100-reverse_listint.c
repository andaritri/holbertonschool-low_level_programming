#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 * @head: head of the linked list.
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = '\0';
	listint_t *next;

	if (head == '\0')
		return ('\0');
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
