#include "lists.h"

void free_listint(listint_t *head)
{
listint_t *current;
listint_t *next;
current = head;
if (!head)
{
return (NULL);
}
while(current != NULL)
{
next = current->next;
free(current);
current = next;
}
}

