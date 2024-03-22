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
	dlistint_t *ptr, *temp;
	unsigned int i;

	if (h != NULL)
	{
		ptr = malloc(sizeof(dlistint_t));

		if (ptr == NULL)
			return (NULL);

		ptr->prev = NULL;
		ptr->n = n;
		ptr->next = NULL;

		if (idx == 0)
		{
			ptr->next = *h;
			*h = ptr;
			return (ptr);
		}

		temp = *h;

		for (i = 0; temp != NULL && i < (idx - 1); i++)
		{
			temp = temp->next;
		}

		if (temp == NULL)
		{
			free(ptr);
			return (NULL);
		}

		ptr->next = temp->next;
		ptr->prev = temp;
		temp->next = ptr;

		return (ptr);
	}
	return (NULL);
}
