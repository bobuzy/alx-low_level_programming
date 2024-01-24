#include "function_pointers.h"

/**
  * int_index - Searche for an integer in an array
  * and return the index
  * @array: The array to be searched
  * @size: The size of the array
  * @cmp: The pointer to the function to be used to compare values
  *
  * Return: -1 if no element matches or if size < or = 0, else return i
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
