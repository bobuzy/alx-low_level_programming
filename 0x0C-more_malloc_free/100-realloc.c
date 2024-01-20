#include "main.h"

/**
  * _realloc - This function reallocates a memory block
  * @ptr: The pointer to the previously allocated memory block
  * @old_size: The current size of the memory block pointed by ptr
  * @new_size: The new size of the memory block after reallocation
  *
  * Return: A pointer to the newly allocated memory block after reallocation
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *more, *less, *newm;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newm = malloc(new_size);
		if (newm == NULL)
		{
			return (NULL);
		}
		return (newm);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		more = addmem(ptr, old_size, new_size);
		return (more);
	}
	else if (new_size < old_size)
	{
		less = redmem(ptr, new_size);
		return (less);
	}
	return (0);
}


/**
 * addmem - Add more memory to the previously allocated memory
 * @mem: Pointer to the previously allocated memory
 * @prev: The size of the current memory
 * @new: The new size of memory to be allocated
 *
 * Return: Pointer to the newly allocated memory
 */

char *addmem(void *mem, unsigned int prev, unsigned int newm)
{
	char *ptr;
	unsigned int i;

        ptr = malloc(newm);

        if (ptr == NULL)
        {
                return (NULL);
        }

	for (i = 0; i < prev; i++)
	{
		((char *)ptr)[i] = ((char *)mem)[i];
	}
	return (ptr);
}


/**
 * redmem - Reduce memory of the previously allocated memory
 * @mem: Pointer to the previously allocated memory
 * @prev: The size of the current memory
 * @new: The new size of memory to be allocated
 *
 * Return: Pointer to the newly allocated memory
 */

char *redmem(void *mem, unsigned int newm)
{
        char *ptr;
        unsigned int i;

        ptr = malloc(newm);

        if (ptr == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < newm; i++)
        {
                ((char *)ptr)[i] = ((char *)mem)[i];
        }
        return (ptr);
}
