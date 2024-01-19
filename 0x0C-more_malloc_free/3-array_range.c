#include "main.h"

/**
  * array_range - This fuction creates an array of integers
  * @min: The mininum number
  * @max: The maximum number
  *
  * Return: The array of integers
  */

int *array_range(int min, int max)
{
	int *ptr;
	int n, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min + 1;

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
