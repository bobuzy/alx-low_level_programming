#include "main.h"

/**
  * _realloc - This function reallocates a memory block
  * @ptr: The pointer to the previously allocated memory block
  * @old_size: The current size of the memory block pointed by ptr
  * @new_size: The new size of the memory block after reallocation
  * Return: A pointer to the newly allocated memory block after reallocation
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrn;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptrn = malloc(new_size);

		if (ptrn == NULL)
			return (NULL);

		return (ptrn);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptrn = malloc(new_size);

	if (ptrn == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptrn[i] = ((char *) ptr)[i];
	}

	free(ptr);

