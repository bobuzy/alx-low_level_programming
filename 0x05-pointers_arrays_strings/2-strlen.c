#include "main.h"

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
