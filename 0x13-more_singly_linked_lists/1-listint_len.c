#include "lists.h"

/**
 * listint_len - Return the number of nodes in the list
 * @h: The pointer to the head of the node
 *
 * Return: The number of nods
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			h = h->next;
			count++;
		}
		return (count);
	}

	return (0);
}
