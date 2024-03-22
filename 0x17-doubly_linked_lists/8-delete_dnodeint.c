#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a specific index
 * @head: Double pointer to the head of the linked list
 * @index: The index at which the node should be deleted
 *
 * Return: integer
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;

	ptr = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}
	if (ptr == *head)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
