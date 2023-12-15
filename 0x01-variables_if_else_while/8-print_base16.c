#include <stdio.h>

/**
 * main - Print all numbers in base 16
 *
 * Return: 0
 */

int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (m = 97; m < 103; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
