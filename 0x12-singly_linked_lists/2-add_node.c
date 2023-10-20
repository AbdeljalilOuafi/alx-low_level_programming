#include "lists.h"
/**
 * add_node - add a new node to the beginning of the list_t list
 * @head: double pointer to the head of the list.
 * @str: string that is going to be added to the list.
 *
 * Return: address of the new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *NewNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	NewNode = malloc(sizeof(list_t));
	if (!NewNode)
		return (NULL);

	NewNode->str = strdup(str);
	NewNode->len = len;
	NewNode->next = (*head);
	(*head) = NewNode;

	return (*head);
}
