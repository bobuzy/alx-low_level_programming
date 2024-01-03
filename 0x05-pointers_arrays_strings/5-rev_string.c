#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int n = 0;
	int i = 0;
	char temp;

	while (s[i++])
	{
		n++;
	}

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = temp;
	}
}
