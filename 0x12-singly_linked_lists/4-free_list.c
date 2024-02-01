#include "lists.h"

/**
  * free_list - This function frees a linked list.
  * @head: The pointer to the first node of linked list
  * Return: 0
  */

void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}

	free(head);
}
