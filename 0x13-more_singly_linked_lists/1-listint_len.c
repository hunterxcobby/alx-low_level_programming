#include "lists.h"

/**
 * listint_len - a function that 
 * prints all the elements of a 
 * listint_t list.
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
  size_t i = 0;
    while (h != NULL)
    {
      i++;
      h = h->next;
      
    }
  return (i);
}

