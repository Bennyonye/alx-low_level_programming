#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *to_delete = NULL;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	/* Delete node at the start. */
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	/* Traverse the list until we reach the node just before the target. */
	for (i = 0; temp && i < index - 1; i++)
	{
		temp = temp->next;
	}

	/* If the next node doesn't exist, or the list ends before the target index. */
	if (!temp || !temp->next)
		return (-1);

	to_delete = temp->next;
	temp->next = to_delete->next;
	free(to_delete);

	return (1);
}
