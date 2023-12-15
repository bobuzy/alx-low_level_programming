#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int m;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	for (m = 65; m < 91; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return (0);
}
