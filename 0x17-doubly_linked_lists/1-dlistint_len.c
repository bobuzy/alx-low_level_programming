#include "lists.h"

/**
 * dlistint_len - Count and return the number of nodes in list
 * @h: Pointer to the header of the list
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}

	return (count);
}
