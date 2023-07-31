#include "lists.h"

/**
 * print_listint - a function that
 * prints all the elements of a
 * listint_t list.
 * @h: the first nnode.
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

