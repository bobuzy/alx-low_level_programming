#include "hash_tables.h"

/**
 * key_index - Return the index of a hash item(key)
 * @key: The key
 * @size: Size of the hash table
 *
 * Return: The index generated
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
