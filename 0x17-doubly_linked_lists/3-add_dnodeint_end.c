#include "lists.h"

/**
 * add_dnodeint_end - Add a node to the end of the doubly linked list
 * @head: Double pointer to the head of the linked list
 * @n: The int node variable of the new node
 *
 * Return: The updated list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = ptr;
	ptr->prev = temp;

	return (*head);
}
