#include "hash_tables.h"


/**
 * hash_table_create - Create a hash table
 * @size: The size of the hash table to be created
 *
 * Return: The hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	int ind, rev;
	hash_table_t *table = malloc(sizeof(*hash_table_t));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	table->array = (**hash_node_t) calloc(table->size, sizeof(*hash_node_t));

	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}

	for (ind = 0; ind < table->size; ind++)
	{
		table->array[ind] = NULL
	}

	return (table);
}
