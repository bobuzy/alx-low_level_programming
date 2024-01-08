#include "main.h"

/**
 * _strchr - Locates a character in astring
 * @s: String to be searched
 * @c: Pointer to the character to be located
 *
 * Return: Pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
		{
			return (s + n);
		}
	}

	return (0);
}
