#include "main.h"

/**
 * _strstr - Search for a substring
 * @haystack: The string
 * @needle: The substring
 * Return: A pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *m = needle;

		while (*n == *m && *m != '\0')
		{
			n++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);
}
