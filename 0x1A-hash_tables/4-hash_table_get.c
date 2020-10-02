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
	char *val;

	if (!ht || !key || !key[0])
		val = NULL;
	key_idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[key_idx] == NULL || key_idx >= (int)ht->size)
		val = NULL;
	else
		val = ht->array[key_idx]->value;
	return (val);
}
