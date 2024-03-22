#include "lists.h"

/**
  * get_dnodeint_at_index - Get the nth node of a listint_t linked list
  * @head: The pointer to the beginning of the linked list
  * @index: The index of the node to get
  *
  * Return: The nth node of the list
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
