#include "main.h"

/**
 * create_array - Create an array of characters and initailize it
 * with a specific character (c)
 * @size: The size of the array to be created
 * @c: The character to be initialized in the array
 *
 * Return: The pointer to the array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
