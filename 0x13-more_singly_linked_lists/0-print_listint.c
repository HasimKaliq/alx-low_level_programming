#include "lists.h"
/**
 * print_listint - returns the elements in the list
 * @h: a variable of type listint_t
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
if(!h)
{
return(1);
}
size_t count = 0;
while (h)
{
printf("%i\n", h->n);
h = h->next;
count++;
}
return (count);
}
