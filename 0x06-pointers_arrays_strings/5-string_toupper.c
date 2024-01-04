#include "main.h"

/**
 * string_toupper - This function changes all lowercase to uppercase
 * @n: The string pointer
 *
 * Return: The capitalized string
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
