#include "lists.h"

/**
  * free_list - This function frees a linked list.
  * @head: The pointer to the first node of linked list
  * Return: 0
  */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);
	free(head->str);
	free(head);
}
