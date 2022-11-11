#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
  int count;
  listint_t *temp = h;
  
  if(h == NULL)
  {
    return;
  }
  while(temp != NULL)
  {
    temp = h->next;
    count++;
  }
  return (count);
}
