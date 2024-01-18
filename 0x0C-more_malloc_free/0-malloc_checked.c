#include "main.h"

/**
  * malloc_checked - This function allocates memory
  * @b: The size to allocate
  *
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
