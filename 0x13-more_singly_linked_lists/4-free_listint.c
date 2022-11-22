#include "lists.h"
/**
 * free_listint - free all the nodes of listint_t
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
listint_t *current;
listint_t *next;
current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
