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
	listint_t *ptr;
	unsigned int i;

	if (head != NULL)
	{
		ptr = head;

		for (i = 0; ptr != NULL && i < index; i++)
		{
			ptr = ptr->next;
		}

		if (ptr == NULL)
		{
			printf("Node does not exist\n");
			return (NULL);
		}

		return (ptr);
	}

	return (NULL);
}
