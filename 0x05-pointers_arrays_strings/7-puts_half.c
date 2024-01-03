#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int half;

	while (str[i++])
	{
		n++;
	}

	if (n % 2 == 0)
	{
		half = n / 2;
	}
	else if (n % 2 == 1)
	{
		half = (n - 1) / 2;
	}

	for (i = half; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
