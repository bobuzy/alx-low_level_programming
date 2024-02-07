#include "lists.h"

/**
  * insert_nodeint_at_index - Insert a new node at a given position
  * @head: The address of the pointer to the beginning of the linked list
  * @idx: The index to insert the node
  * @n: The int imember of the node
  *
  * Return: The pointer to the newly inserted node's address
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (head != NULL)
	{
		ptr = malloc(sizeof(listint_t));

		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr->n = n;
		ptr->next = NULL;

		if (idx == 0)
		{
			ptr->next = *head;
			*head = ptr;
			return (ptr);
		}
		temp = *head;

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
		temp->next = ptr;

		return (ptr);
	}
	return (NULL);
}
