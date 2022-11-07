#include "lists.h"
#include <string.h>
/**
 * free_list - free the nodes in the list
 * @head: a pointer to a pointer of type list_t
*/

void free_list(list_t *head){
list_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
