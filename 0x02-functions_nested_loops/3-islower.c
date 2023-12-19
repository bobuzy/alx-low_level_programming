#include "main.h"

/**
 * _islower - Check if an alphabet is in lowercase
 * @c: Alphabet to be checked
 *
 * Return: 1, if it is lowercase. 0, otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
