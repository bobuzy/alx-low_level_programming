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
	int i = 0, j = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	s = malloc(j);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = 0;
		i++;
	}

	return (s);
}
