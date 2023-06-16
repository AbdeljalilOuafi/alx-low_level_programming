#include "lists.h"

/**
 * dlistint_len - calculates the length of a doubly linked list
 * @h: head
 * Return: size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t size = 0;

	if (!curr)
		return (0);
	while (curr)
	{
		curr = curr->next;
		size++;
	}
	return (size);
}
