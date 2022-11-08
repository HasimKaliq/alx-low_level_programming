#include "lists.h"
#include <string.h>
/**
 * free_list - free the nodes in the list
 * @head: a pointer to a pointer of type list_t
*/

void free_list(list_t *head){
list_t *temp;
temp = head;
if (head == NULL)
{
return;
} 
while (temp->next != NULL)
{
temp = head;
head = head->next;
free(temp);
if(temp->next == NULL)
{
free(head);
}
}
}
