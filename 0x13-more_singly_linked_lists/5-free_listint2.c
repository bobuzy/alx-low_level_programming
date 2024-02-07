#include "lists.h"

/**
  * free_listint2 - This function frees a linked list.
  * @head: The double pointer to the first node of linked list
  *
  * Return: 0
  */

void free_listint2(listint_t **head)
{
	if (head != NULL && *head != NULL)
	{
		free_listint2(&((*head)->next));
		free(*head);
		*head = NULL;
	}
}
