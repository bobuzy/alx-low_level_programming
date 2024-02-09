#include "main.h"

/**
  * flip_bits - Get the difference in bits between the two numbers
  * @n: The first number
  * @m: The second number
  *
  * Return: Number of differences in bits.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}

		n = n >> 1;
		m = m >> 1;
	}

	return (count);
}
