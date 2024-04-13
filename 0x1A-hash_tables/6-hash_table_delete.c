#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *current;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			item = current;
			current = current->next;
			free(item->key);
			free(item->value);
			free(item);
		}

	}
	free(ht->array);
	free(ht);
}
