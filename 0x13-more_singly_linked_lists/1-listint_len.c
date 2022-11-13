#include "lists.h"
size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
{
return (count);
}
while (h)
{
if(h->n  != NULL || h->next != NULL)
{
count++;
}
}
return (count);
}
