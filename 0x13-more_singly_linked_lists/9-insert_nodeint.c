listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 1; i < idx && temp; i++)
	{
		temp = temp->next;
	}

  /* if we're at the end of the list or idx is greater than list length */
	if (!temp)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
