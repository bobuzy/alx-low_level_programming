#include "main.h"

/**
  * _calloc - This function is used to allocate memory for an array
  * @nmemb: The number of elements tp allocate memory for
  * @size: The size of each element by bytes
  *
  * Return: A pointer to the allocated memory block
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	n = nmemb * size;

	for (i = 0; i < n; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
