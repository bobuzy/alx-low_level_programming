#include "function_pointers.h"

/**
  * array_iterator - This function executes a function given as a parameter
  * @array: Pointer to the array array
  * @size: The size of the array
  * @action: The pointer to the function to use
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
