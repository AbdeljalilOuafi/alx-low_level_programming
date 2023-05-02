#include "lists.h"

/**
 * pop_listint - Delete the head node of the listint_t linked list
 * @head: pointer to a pointer to the head of a linked list
 *
 * Return: integer value of the first node if success,if not return 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *NewHead;

	if (!*head)
		return (0);
	NewHead = *head;
	n = NewHead->n;
	*head = NewHead->next;
	free(NewHead);
	return (n);
}
