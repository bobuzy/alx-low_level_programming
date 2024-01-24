#include "function_pointers.h"

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
