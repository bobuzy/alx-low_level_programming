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
	size_t left = 0, right = 0, end;
	size_t jump = sqrt(size);

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while(left <= size - 1)
	{
		right = left + jump;

		if (right > size - 1)
		{
			right = size - 1;
		}
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);

		if (array[left] == value)
		{
			return (left);
		}
		else if (array[right] >= value)
		{
			break;
		}
		else 
		{
			if (left + jump > size - 1)
			{
				break;
			}
			left = right;
		}
	}
	
	end = left + jump;
	printf("Value found between indexes [%lu] and [%lu]\n", left, end);

	for (; left <= right; left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
		{
			return (left);
		}
	}
	return (-1);
}
