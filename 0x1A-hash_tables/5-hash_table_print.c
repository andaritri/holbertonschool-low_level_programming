#include "hash_tables.h"

/**
 * hash_table_print - print on the stdout a hash table.
 * @ht: hash table to print out.
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int flag = 0;
	hash_node_t *node;

	if (ht != NULL)
	{
		printf("{");
		for (; idx < ht->size; idx++)
		{
			node = ht->array[idx];
			while (node)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				flag++;
			}
		}
		printf("}\n");
	}
}
