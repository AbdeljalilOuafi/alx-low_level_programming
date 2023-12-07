#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: the index to be deleted
 * Return: 1 if deleted, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;

	if (!curr)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		if (curr->next)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}

	while (index > 0 && curr)
	{
		curr = curr->next;
		index--;
	}

	if (!curr)
		return (-1);

	if (curr->prev)
		curr->prev->next = curr->next;

	if (curr->next)
		curr->next->prev = curr->prev;

	free(curr);
	return (1);
}
