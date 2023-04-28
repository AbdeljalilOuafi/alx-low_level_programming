#include "lists.h"

/**
 * free_list - Frees the entire nodes from a linked list
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

