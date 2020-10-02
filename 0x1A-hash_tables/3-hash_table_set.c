#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table
 * @ht: Hash table to add or update.
 * @key: Key
 * @value: Associated value with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t *node;
	int added;

	if (!ht || !key || !value || !key[0])
		return (0);
	key_idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[key_idx];
	while (node != NULL)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = (char *)strdup(value);
			return (1);
		}
		node = node->next;
	}
	added = add_node(&ht->array[key_idx], key, value);
	return (added);
}
/**
 * add_node - Add a node at the beginning of a singly linked list.
 * @h: pointer to first node of the linked list.
 * @key: string to add to node
 * @value: string to add to node
 *
 * Return: 1 if the node was added, 0 otherwise.
 */
int add_node(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *)strdup(key);
	new_node->value = (char *)strdup(value);
	new_node->next = *h;
	*h = new_node;
	return (1);
}
