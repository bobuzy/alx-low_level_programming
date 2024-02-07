#include "lists.h"

/**
  * sum_listint - Get the sum of all the data (n) of the linked list
  * @head: The pointer to the beginning of the linked list
  *
  * Return: The sum of all the data (n) of the linked list
  */

int sum_listint(listint_t *head)
{
	int count;

	if (head == NULL)
	{
		return (0);
	}

	count = head->n + sum_listint(head->next);
	return (count);
}
