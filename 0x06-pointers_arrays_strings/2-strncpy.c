#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: Number of bytes
 * 
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
