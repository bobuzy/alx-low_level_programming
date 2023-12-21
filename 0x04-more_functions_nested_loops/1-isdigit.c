#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: The number to be character to be checked
 *
 * Return: 1, if c is digit. Else return 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
