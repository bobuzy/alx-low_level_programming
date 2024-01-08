#include "main.h"

/**
 * _memcpy - Fill first n bytes of src memory dest memory
 * @dest: Pointer to the memory to be filled
 * @src: Pointer to the memory to be copied from
 * @n: Number of bytes of memory to be filled
 *
 * Return: Pointer to the filled memory (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
