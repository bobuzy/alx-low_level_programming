#include "main.h"

/**
  * clear_bit - Set the value of a bit to 0 at a given index
  * @n: The pointer to the number to be changed
  * @index: The index where the bit would be chnaged to 0
  *
  * Return: 1, if successful. 0, otherwise.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int counter = 0, switcher = 1;

	if (n == NULL)
	{
		return (-1);
	}

	while (counter < index)
	{
		switcher = switcher << 1;
		counter++;
	}

	*n = *n & ~switcher;

	return (1);
}
