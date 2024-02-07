/**
  * delete_nodeint_at_index - Delete a node at a given position
  * @head: The address of the pointer to the beginning of the linked list
  * @index: The index of the node to be deleted
  *
  * Return: 1 for success, -1 for failure
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *prev = *head;
	listint_t *curr = prev->next;

	for (i = 1; curr != NULL && i < index; i++)
	{
		prev = curr;
		curr = curr->next;
	}

	if (curr == NULL)
	{
		return (-1);
	}

	prev->next = curr->next;
	free(curr);

	return (1);
}
