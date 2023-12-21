#include "main.h"

/**
 * more_numbers - Print the numbers for 0 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m > 9)
			{
				int o, p;

				o = m / 10;
				p = m % 10;

				_putchar(o + '0');
				_putchar(p + '0');
			}
			else
			{
				_putchar(m + '0');
			}
		}
		_putchar('\n');
	}
}
