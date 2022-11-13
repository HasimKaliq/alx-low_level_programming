#include "lists.h"

size_t print_listint(const listint_t *h)
{
  size_t count;
  while(h != NULL)
  {
    printf("%d", h->n);
    h = h->next;
    count++;
  }
  return (count);
}
