#include "main.h"

/**
 * _memset - Fill first n bytes of s memory with constant byte b
 * @s: Pointer to the memory to be filled
 * @b: Character to fill the memory with
 * @n: Number of bytes of memory to be filled
 *
 * Return: Pointer to the filled memory (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
