#include "lists.h"
#include <string.h>
/**
 * free_list - free the nodes in the list
 * @head: a pointer to a pointer of type list_t
*/

void free_list(list_t *head){
list_t *p, *pnext;
p = head;
if (head == NULL)
{
return;
} 
if (p != NULL)
{
pnext = p->next;
free(p);
p = pnext;
}
}
