#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of linked list
 * Return: number of elements in list_t
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
