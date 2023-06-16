#include "lists.h"

/**
 * get_dnodeint_at_index - getting the dnodeint at index object
 * @head: head of the doubly linked list
 * @index: the index which to get the dnondeint from
 * Return: the node of that index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;

	curr = head;

	while (index > 0 && curr)
	{
		index--;
		curr = curr->next;
	}
	return (curr);
}
