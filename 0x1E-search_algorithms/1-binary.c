#include "search_algos.h"
/**
 * binary_search - Search for 'value' using binary search in 'array'
 * @array: The array to be searched
 * @size: The size of the array to be searched
 * @value: The value to be searched for in the `array`
 *
 * Return: The index of the value in the array if found, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, ind;

	if (array == NULL)
	{
		return (-1);
	}
	while (right >= left)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (ind = left; ind <= right; ind++)
		{
			printf("%d", array[ind]);
			if (ind < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
