#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node;
end_node = malloc(sizeof(listint_t));

if (end_node == NULL)
{
return (NULL);
}
end_node->n = n;
end_node->next = NULL;

while (*head->next != NULL)
{
head = head->next;
}
head->next = end_node;
return(end_node);
}
