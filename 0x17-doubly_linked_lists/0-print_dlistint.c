#include "lists.h"

/**
 * print_dlistint - Print all elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count += 1;
		ptr = ptr->next
	}

	return (count);
}
