#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: The destination string pointer
 * @src: The source string pointer
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';

	return (dest);
}
