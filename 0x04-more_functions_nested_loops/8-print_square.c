#include "main.h"

/**
 * print_square - Print a square
 * @size: The size of the #
 *
 * Return: 0
 */

void print_square(int size)
{
	if (size > 0)
	{
		int n;

		for (n = 0; n < size; n++)
		{
			int m;

			for (m = 0; m < size; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
