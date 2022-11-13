#include "lists.h"

size_t print_listint(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
{
return (count);
}
while (h)
{
count++;
printf("%d", h->n);
h = h->next;  
}
return (count);
}
