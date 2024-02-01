#include "lists.h"

/**
  * list_len - This function calculates the number of elements of a list
  * @h: The pointer to the linked list
  * Return: The number of elements of a list
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
