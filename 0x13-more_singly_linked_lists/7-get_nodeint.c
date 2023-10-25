#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the listint_t linked list
 * @head: pointer to the head of linked list
 * @index: index of the node to fetch
 * Return: pointer to the node at the specified index, Null otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index-- && head)
		head = head->next;
	return (head);
}
