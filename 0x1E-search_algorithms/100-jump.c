#include "search_algos.h"

/**
 * jump_search - Search for `value` using jump search in `array`
 * @array: The array to be searched
 * @size: The size of the array to be searched
 * @value: The value to be searched for in the `array`
 *
 * Return: The index of the value in the array if found, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, ind;
	size_t jump = sqrt(size);

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (ind = 0; ind < size; ind += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", ind, array[ind]);
		if (array[ind] == value)
		{
			return (ind);
		}
		if (array[ind] < value)
		{
			low = ind;
		}
		if (array[ind] > value)
		{
			break;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, ind);
	for (ind = low; ind < size; ind++)
	{
		printf("Value checked array[%lu] = [%d]\n", ind, array[ind]);
		if (array[ind] == value)
		{
			return (ind);
		}
	}
	return (-1);
}
