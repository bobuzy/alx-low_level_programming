#include "lists.h"

/**
 * add_dnodeint - Add a node to the beginning of a list
 * @head: The double pointer to the current head of the list
 * @n: The integer data to be inserted in the new node
 *
 * Return: The modified node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->prev = NULL;
	ptr->n = n;
	prt->next = *head;

	if (*head != NULL)
	{
		head->prev = ptr;
	}

	*head = ptr;
	return (*head);
}
