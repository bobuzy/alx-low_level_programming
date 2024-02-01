#include "lists.h"

/**
  * add_node - This function adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to be added to the node
  * Return: The address of the new node or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head != NULL && str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			return (NULL);
		}

		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = *head;

		*head = new;

		return (new);
	}

	return (0);
}

/**
  * _strlen - This function returns the length of a string
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
