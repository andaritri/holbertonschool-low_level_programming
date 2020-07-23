#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add new node to a linked list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 *
 * Return: pointer of the new element added to linked list.
 */

int _strlen(const char *s);

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

int _strlen(const char *s)
{
	int idx = 0;

	for (; s[idx]; idx++)
	;
	return(idx);
}
