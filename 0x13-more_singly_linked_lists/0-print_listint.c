#include "lists.h"
/**
 * print_listint - returns the elements in the list
 * @h: a variable of type listint_t
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
if (h == NULL)
{
return (0);
}
while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
