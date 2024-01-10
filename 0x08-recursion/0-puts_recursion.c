#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: The pointer to the string to be printed
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
