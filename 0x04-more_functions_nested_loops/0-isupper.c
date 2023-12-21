#include "main.h"

/**
 * _isupper - Checks if a character is in uppercase
 * @c: The character to be checked
 *
 * Return: 1, if c is an uppercase character. Else return 0
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
