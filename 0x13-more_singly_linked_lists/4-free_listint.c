#include "lists.h"

void free_listint(listint_t *head)
{
listint_t *temp;
if (head == NULL)
{
return (NULL);
}
while(head)
{
temp = head;
free(temp);
head = head->next;
}
}
