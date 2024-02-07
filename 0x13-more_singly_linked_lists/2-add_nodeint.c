#include "lists.h"

/**
  * add_nodeint - Add a new node at the beginning of a listint_t list
  * @head: The pointer to the beginning of the list
  * @n: The int member of the node
  *
  * Return: The address of the new list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			printf("Error\n");
			free(new);
			return (NULL);
		}

		new->n = n;
		new->next = *head;

		*head = new;

		return (new);
	}

	return (NULL);
}
