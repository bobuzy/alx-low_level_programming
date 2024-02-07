#include "lists.h"

/**
 * pop_listint - Delete the head node of the linked list
 * @head: The double pointer to the beginning of the linked list
 *
 * Return: The head node's dat
 */

int pop_listint(listint_t **head)
{
	int dig;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		dig = (*head)->n;
		ptr = (*head)->next;

		free(*head);
		*head = ptr;

		return (dig);
	}
}
