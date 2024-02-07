#include "lists.h"

/**
  * free_listint2 - This function frees a linked list.
  * @head: The double pointer to the first node of linked list
  *
  * Return: 0
  */

void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		if (*head == NULL)
		{
			return;
		}

		free_listint2(&((*head)->next));
		free(*head);
	}
}
