#include "main.h"

/**
 * print_numbers - Prints the digits from 0 - 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
