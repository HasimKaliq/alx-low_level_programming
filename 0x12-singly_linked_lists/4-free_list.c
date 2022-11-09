#include "lists.h"
/**
 * free_list - free the nodes in the list
 * @head: a pointer to a pointer of type list_t
*/

void free_list(list_t *head)
{
list_t *current = head;
list_t *next;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
head = NULL;
}
