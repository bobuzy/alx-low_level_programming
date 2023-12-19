#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int n;

	for (n = 0; n < 24; n++)
	{
		int m;

		for (m = 0; m < 60; m++)
		{
			int a, b, c, d;

			a = n / 10;
			b = n % 10;
			c = m / 10;
			d = m % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}
