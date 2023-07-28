#include "lists.h"


size_t print_list(const list_t *h)
{
  const list_t *current = h;
    size_t count = 0;

    for (current = h; current != NULL; current = current->next)
      {
      if (current->str == NULL)
      {
      printf("[%d] %s\n", 0, "(nil)");
      }
    else
      {
      printf("[%d] %s \n", current->len, current->str);
        /*current = current->next;*/ 
      }
        count++;
    }
    return count;
}

