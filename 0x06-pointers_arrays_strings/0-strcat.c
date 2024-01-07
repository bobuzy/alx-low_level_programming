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
	int n = 0;
	int i;

	/*
	 * Count the length of the destination string to determine starting
	 * point for appending
	 */
	while (dest[n] != '\0')
	{
		n++;
	}

	/* Append the source string to the destination string */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n] = src[i];
		n++; /* Increase n at every loop */
	}

	/* Add the null character tot the end of the destiantion string */
	dest[n] = '\0';

	/* Return the string */
	return (dest);
}
