#include "lists.h"

/**
 * print_listint - Print all elements of a listint_t list
 * @h: The pointer to the begining of the list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
		return (count);
	}
	return (0);
}
