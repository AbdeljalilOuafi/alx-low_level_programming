#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node with
 * a specific integer value
 *
 * @head: pointer to a pointer to the head of linked list
 * @idx: index where you insert the new node
 * @n: integer value which is assigned to the new node
 *
 * Return: pointer to the new node
 * NULL if the insertion fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < idx - 1 && temp; i++)
		temp = temp->next;
	if (!temp)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
