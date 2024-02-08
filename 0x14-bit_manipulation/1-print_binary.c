#include "main.h"

/**
 * print_binary - Print the binanry representation of a number recursively
 * @n: The number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
