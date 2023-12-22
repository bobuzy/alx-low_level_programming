#include "main.h"

/**
 * print_triangle - Print a right angle trianglr
 * @size: The size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int n;

		for (n = 1; n <= size; n++)
		{
			int m = size - n;

			int o, p;

			for (o = 0; o < m; o++)
			{
				_putchar(32);
			}

			for (p = 0; p < n; p++)
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
