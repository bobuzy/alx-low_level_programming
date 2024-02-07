#include "lists.h"

/**
  * get_nodeint_at_index - Get the nth node of a listint_t linked list
  * @head: The pointer to the beginning of the linked list
  * @index: The index of the node to get
  *
  * Return: The nth node of the list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
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
