#include "main.h"

/**
 * _isupper - Checks if a character is in uppercase
 * @c: The character to be checked
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
