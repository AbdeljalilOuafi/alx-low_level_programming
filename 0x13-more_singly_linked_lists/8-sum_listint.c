#include "lists.h"

/**
 * sum_listint - sum of all of the integer values on a linked list
 * @head: pointer to the head of the linked list
 * Return: sum of every integer value on the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
