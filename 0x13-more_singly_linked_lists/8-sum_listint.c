#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Calculate the sum of the elements of a linked list.
 * @head: head of the linked list.
 *
 * Return: Sum of the elements.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
