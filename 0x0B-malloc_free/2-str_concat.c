#include "main.h"

/**
 * str_concat - Join string s2 to string s1
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int n = 0, m = 0, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[n] != '\0')
	{
		n++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	ptr = malloc((sizeof(char) * (n + m)) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < m)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
