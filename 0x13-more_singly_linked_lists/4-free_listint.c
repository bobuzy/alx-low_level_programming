#include "lists.h"

/**
  * free_listint - This function frees a linked list.
  * @head: The pointer to the first node of linked list
  *
  * Return: void
  */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_listint(head->next);
	free(head);
}
