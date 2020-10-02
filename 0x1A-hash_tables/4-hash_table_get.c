#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: hash table you want to look into
 * @key:  key to looking for
 *
 * Return: the value associated with the element, or NULL if key couldn’t be
 * found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int key_idx;

	if (!ht || !key || !key[0])
		return (NULL);
	key_idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[key_idx] == NULL || key_idx >= (int)ht->size)
		return (NULL);
	while (ht->array[key_idx])
	{
		if (!strcmp(ht->array[key_idx]->key, key))
			break;
		ht->array[key_idx] = ht->array[key_idx]->next;
	}
	return (ht->array[key_idx]->value);
}
