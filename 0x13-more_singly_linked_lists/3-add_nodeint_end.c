#include "lists.h"



listint_t *add_nodeint_end(listint_t **head, const int n)
{

	if (*head == NULL)
	{
		return (NULL);
	listint_t *end_node;
	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
       while (*head)
       {
	       *head = *head->next;
       }
       end_node->n = n;
       end_node->next = NULL;

}
