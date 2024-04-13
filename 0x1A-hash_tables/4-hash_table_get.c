#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value of the key provided
 * @ht: The hash table to the searched
 * @key: The key to be searched
 *
 * Return: The value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;

	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}

		item = item->next;
	}
	return (NULL);
}
