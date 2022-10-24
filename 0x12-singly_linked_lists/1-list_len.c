#include "lists.h"

/**
 * @h: is a pointer of type list_t
 * list_len - prints num of elements of a list_t list.
 * Return - the number of elements.
*/

size_t list_len(const list_t *h)
{
int counter;
counter = 0;
while (h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
