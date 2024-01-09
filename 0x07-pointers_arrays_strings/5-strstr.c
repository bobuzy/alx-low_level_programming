#include "main.h"

/**
 * _strstr - Search for a substring
 * @haystack: The string
 * @needle: The substring
 * Return: A pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		/*Point to current position in haystack*/
		char *n = &haystack[i];

		/*Point to the beginning of needle*/
		char *m = needle;

		/**
		 * Once *n = *m start comparing them and move to the next
		 * character till you get to the end of needle (*m = '\0')
		 */
		while (*n == *m && *m != '\0')
		{
			n++; /*Move to the next character in haystack*/
			m++; /*Move to the next character in needle*/
		}

		/**
		 * If along the line, they don't match, the for loop will restart
		 * until all the characters in haystack has been exceeded
		 */

		/**
		 * If they match (*m = '\0'), after needle has been exceeded, return
		 * the current position haystack (the position where *n == *m)
		 */

		if (*m == '\0')
		{
			return (&haystack[i]);
		}
	}
	/* Else return NULL */
	return (0);
}
