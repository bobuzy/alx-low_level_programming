#include "hash_tables.h"

/**
 * hash_table_print - Print all elements in a hash table
 * @ht: The hash table to be printed
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	char signal = 0;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];
		while (item != NULL)
		{
			if (signal == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", item->key, item->value);
			signal = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
