#include "lists.h"

/**
  * add_node_end - This function adds a new node at the end of a list
  * @head: The original linked list
  * @str: A pointer to a an array str
  * Return: The address of the new list or NULL if error occurs
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *curr;

	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head  = new;
			return (*head);
		}
		else
		{
			curr = *head;
			while (curr->next)
				curr = curr->next;

			curr->next = new;
			return (curr);
		}
	}

	return (NULL);
}

/**
  * _strlen - This function eturns the length of a string
  * @s: The string to count
  * Return: The string length
  */

int _strlen(const char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	return (count);
}
