#include "hash_tables.h"


/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 if succesful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *item;

	if (!key || !ht || !value)
	{
		return (0);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;

	node = create_node(key, value);
	if (node == NULL)
	{
		return (0);
	}

	item = ht->array[index];
	if (item == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else if (strcmp(item->key, key) == 0)
	{
		free(item->value);
		item->value = strdup(value);
		if (value != NULL && item->value == NULL)
		{
			return (0);
		}

		free(node);
		return (1);
	}
	else
	{
		node->next = item;
		ht->array[index] = node;
		return (1);
	}
}


/**
 * create_node - Create a new hash node/item
 * @key: The key to be assigned to the node
 * @value: The value to be assigned to the node
 *
 * Return: The new created node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (key == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL)
	{
		return (NULL);
	}

	if (value != NULL && node->value == NULL)
	{
		return (NULL);
	}

	node->next = NULL;

	return (node);
}
