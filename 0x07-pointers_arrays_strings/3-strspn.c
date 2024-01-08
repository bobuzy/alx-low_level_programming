#include "main.h"

/**
 * _strspn - Get the length of prefix substring
 * @s: The string to be counted
 * @accept: The string to be compared with
 *
 * Return: The length of initial segment of s
 * which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	unsigned int count = 0;

	while (*s)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			{
				count++;
				break;
			}
			else if (accept[n + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
