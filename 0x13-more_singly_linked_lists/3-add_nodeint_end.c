#include "lists.h"

/**
  * add_nodeint_end - Add a new node at the end of a list
  * @head: The pointer to the beginning of the list
  * @n: The int member of the node
  *
  * Return: The address of the new list
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			printf("Error\n");
			return (NULL);
		}

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			ptr = *head;

			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}

			ptr->next = new;

			return (*head);
		}
	}
	return (NULL);
}
