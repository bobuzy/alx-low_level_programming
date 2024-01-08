#include "main.h"

/**
 * _strpbrk - Locates the first occurence of a set of characters in a string
 * @s: String to be searched
 * @accept: Pointer to the characters to be located
 *
 * Return: Pointer address to the first occurrence of the character
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int n;

	while (s[i] != '\0')
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (0);
}
