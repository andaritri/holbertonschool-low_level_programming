#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **arr;
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	arr = malloc(sizeof(hash_node_t *) * size);
	if (!arr)
		return (NULL);
	for (; i < size; i++)
	{
		arr[i] = NULL;
	}
	ht->size = size;
	ht->array = arr;
	return (ht);
}
