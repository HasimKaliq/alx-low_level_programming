#include "lists.h"
/**
 * free_list - free the nodes in the list
 * @head: a pointer to a pointer of type list_t
*/

void free_list(list_t *head){
list_t *temp;
temp = head;
while (head != NULL)
{
temp = head;
head = head->next;
temp->str = NULL;
temp -> len = NULL;
free(temp);
if(head == NULL)
{
head->str = NULL;
head->len = NULL;
free(head);
}
}
}
