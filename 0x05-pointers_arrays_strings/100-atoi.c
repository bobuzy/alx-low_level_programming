#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The pointer string to be converted
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int i = 0;
	int length = 0;
	int minus = 0;
	int digit = 0;
	int new;
	
	while (s[length] != '\0')
	{
		length++;
	}
	
	while (i < length)
	{
		if (s[i] == '-')
		{
			minus++;
		}
		
		if (s[i] >= '0' && s[i] <= '9')
		{
			new = s[i] - '0';
			
			digit = (digit * 10) + new;
			
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}
	if (minus % 2)
	{
		digit = -digit;
	}
	return(digit);
}
