#include "main.h"

/**
  * argstostr - This function concatenates all the arguments passed into the
  * program
  * @ac: Argument count
  * @av: Argument vector
  * Return: The concatenated arguments
  */

char *argstostr(int ac, char **av)
{
	int i, j;
	int length = 0, index = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}

	ptr = malloc((sizeof(char) * length) + (1 * ac) + 1);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (j < _strlen(av[i]))
		{
			ptr[index] = av[i][j];
			index++;
			j++;
		}
		ptr[index] = '\n';
		index++;
	}
	ptr[index] = '\0';

	return (ptr);
}

/**
 * _strlen - Counts the lenght of a string
 * @s: The pointer to the string
 *
 * Return: The lenght of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s++)
	{
		n++;
	}

	return (n);
}
