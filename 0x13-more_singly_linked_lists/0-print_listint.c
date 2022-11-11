#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
  if (h == NULL){
    return(1);
  }
  int count;
  listint_t temp = h;
  
  while(temp != NULL)
  {
    temp = temp->next;
    count++;
  }
  return (count);
}
