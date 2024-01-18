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
	int *s, i = 0;

	if (min > max)
		return (NULL);

	s = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (s == NULL)
		return (NULL);

	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}

	return (s);
}
