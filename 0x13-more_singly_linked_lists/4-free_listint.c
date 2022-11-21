#include "lists.h"

void free_listint(listint_t *head)
{
if (!head)
{
return (NULL);
}
while(head)
{
head = head->next;
free(head);
}
head = NULL;
}
