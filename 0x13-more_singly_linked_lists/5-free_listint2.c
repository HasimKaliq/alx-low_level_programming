#include "lists.h"

/**
 * free_listint2 - free all the nodes of listint_t
 * the function sets the head to NULL
 * @head: pointer to a pointer to head of list
 */

void free_listint2(listint_t **head)
{
listint_t *temp;
listint_t *next;
temp = *head;
if (*head->next == NULL)
{
	*head = NULL;
}
while (temp != NULL)
{
	next = temp->next;
	free(temp);
	temp = next;
}
*head = NULL;
}
