#include "lists.h"

/**
 *print_listint - Prints all the elements of the listint_t list
 *@h: pointer to the head node of the list
 *Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
