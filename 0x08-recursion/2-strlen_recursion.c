#include "main.h"

/**
 * _strlen_recursion - Return the length of the string
 * @s: Pointer to the string to be counted
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
