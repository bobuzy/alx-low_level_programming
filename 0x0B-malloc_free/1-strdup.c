#include "main.h"

/**
 * _strdup - Duplicate a string and return a pointer to the new string
 * @str: The string to be duplicated
 *
 * Return: The pointer to the new string
 */

char *_strdup(char *str)
{
	unsigned int n, i = 1;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < i; n++)
	{
		ptr[n] = str[n];
	}

	ptr[i] = '\0';

	return (ptr);
}
