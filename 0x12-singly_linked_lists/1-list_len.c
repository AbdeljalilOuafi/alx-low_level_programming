#include "lists.h"

/**
 * list_len -  return number of elements in a linked list_t list
 * @h: pointer to the head of list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
