#include "main.h"

/**
  * binary_to_uint - Convert binary to base 10
  * @b: The pointer to the binary strring
  *
  * Return: The base 10 value
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}

		result = result << 1;
		result += b[i] - '0';

		i++;
	}

	return (result);
}
