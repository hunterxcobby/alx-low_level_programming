#include "lists.h"

/**
*list_len - a function that returns the number of elements in a list
*@h: name of list
*Return: integer
*/

size_t list_len(const list_t *h)
{
	size_t put;

	put = 0;
	while (h != NULL)
	{
		h = h->next;
		put++;
	}
	return (put);
}
