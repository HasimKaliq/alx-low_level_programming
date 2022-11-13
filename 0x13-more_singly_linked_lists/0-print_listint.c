#include "lists.h"

size_t print_listint(const listint_t *h)
{
  size_t count = 0;
  while(h != NULL)
  {
    count++;
    printf("%d", h->n);
    h = h->next;
    
  }
  return (count);
}
