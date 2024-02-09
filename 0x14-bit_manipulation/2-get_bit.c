#include "main.h"

/**
  * get_bit - Get the value of a bit at a given index
  * @n: The decimal representation of the number to be checked
  * @index: The index to check
  *
  * Return: The value of the bit at the given index
  */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while (n > 0)
	{
		if (count == index)
		{
			return (n & 1);
		}

		n = n >> 1;
		count++;
	}

	return (-1);
}
