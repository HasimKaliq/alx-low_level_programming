#include "lists.h"

size_t print_listint(const listint_t *h)
{
  int count;
  listint_t temp = h;
  count = 0;
  while(temp != NULL)
  {
    printf("%d", temp->n);
    temp = temp->next;
    count++;
  }
  return (count);
}
