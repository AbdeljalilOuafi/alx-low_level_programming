#include "lists.h"

/**
 * free_listint2 - Free every node of the linked list
 * and set the pointer to NULL
 * @head: pointer to the head node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
