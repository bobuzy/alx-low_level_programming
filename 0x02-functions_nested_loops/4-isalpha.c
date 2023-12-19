#include "main.h"

/**
 * _isalpha - Checks if it's an alphabet
 * @c: Character to be checked
 *
 * Return: 1, if it's an alphabet. 0, otherwise.
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
