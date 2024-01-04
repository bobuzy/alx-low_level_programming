#include "main.h"

/**
 * _strcmp - Compare two string values
 * @s1: The first string
 * @s2: The second string
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (s1[n] != '\0' && s2[n] != '\0')
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
		n++;
	}
	return (0);
}
