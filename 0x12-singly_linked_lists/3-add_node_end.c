#include "lists.h"

/**
 * add_node_end - Add a new node at the end of the linked list
 * @head: A pointer to a pointer to the head node of the list
 * @str: The string that is going to be stored in the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	NewNode = malloc(sizeof(list_t));

	if (!NewNode)
		return (NULL);

	NewNode->str = strdup(str);
	NewNode->len = len;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		*head = NewNode;
		return (NewNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = NewNode;

	return (NewNode);
}
