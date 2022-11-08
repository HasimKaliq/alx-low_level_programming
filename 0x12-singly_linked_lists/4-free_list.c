#include "lists.h"
/**
 * free_list - free the nodes in the list
 * @head: a pointer to a pointer of type list_t
*/

void free_list(list_t *head){
if(head == NULL)
{
return;
}
list_t *temp;
temp = head;
while (head->next != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
