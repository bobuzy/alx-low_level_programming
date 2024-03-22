#include "lists.h"

/**
 * free_dlistint - Free the doubly linked list
 * @head: The head of the list to be freed
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_dlistint(head->next);
	free(head);
}
