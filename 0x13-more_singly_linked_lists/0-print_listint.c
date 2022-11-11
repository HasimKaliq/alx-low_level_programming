#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
  int count;
  listint_t temp = h;
  
  while(temp != NULL)
  {
    temp = temp->next;
    count++;
  }
  return (count);
}
