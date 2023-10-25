#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: a pointer to a pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *PreviousNode;
	listint_t *NextNode;

	PreviousNode = NULL;
	NextNode = NULL;

	while (*head)
	{
		NextNode = (*head)->next;
		(*head)->next = PreviousNode;
		PreviousNode = *head;
		*head = NextNode;
	}
	*head = PreviousNode;
	return (*head);
}
