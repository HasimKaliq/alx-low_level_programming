#include "lists.h"
/**
 * listint_len - returns the number of elements in the list
 * @h: a variable of type listint_t
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
{
return (1);
}
while (h)
{
if (h->n  || h->next != NULL)
{
count++;
h = h->next;
}
}
return (count);
}
