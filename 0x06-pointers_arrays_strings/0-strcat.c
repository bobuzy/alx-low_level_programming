#include "main.h"

/**
 * _strcat - Join two strings together
 * @dest: The destination string
 * @src: The source string
 *
 * Return: This returns the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}

	m = 0;
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}

	dest[n] = '\0';
	return (dest);
}
