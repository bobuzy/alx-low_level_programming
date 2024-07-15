#include "search_algos.h"

/**
 * linear_search - Search for `value` linearly in `array`
 * @array: The array to be searched
 * @size: The size of the array to be searched
 * @value: The value to be searched for in the `array`
 *
 * Return: The index of the value in the array if found, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			index = (int)index;
			return (index);
		}
	}

	return (-1);
}
