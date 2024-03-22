#include "lists.h"

/**
  * insert_dnodeint_at_index - Insert a new node at a given position
  * @h: The address of the pointer to the beginning of the linked list
  * @idx: The index to insert the node
  * @n: The int imember of the node
  *
  * Return: The pointer to the newly inserted node's address
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = temp;
	ptr->next = temp->next;
	temp->next->prev = ptr;
	temp->next = ptr;

	return (ptr);
}
