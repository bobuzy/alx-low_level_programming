#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - This function concatenates all the arguments passed into the
  * program
  * @ac: Argument count
  * @av: Argument vector
  * Return: The concatenated arguments
  */

char *argstostr(int ac, char **av)
{
	int c = 0, i = 0, j = 0, k = 0;
	char *l;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}

		j = 0;
		i++;
	}

	l = malloc((sizeof(char) * c) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			l[k] = av[i][j];
			k++;
			j++;
		}

		l[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	l[k] = '\0';
	return (l);
}
