#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node = malloc(sizeof(listint_t));
listint_t *temp - *head;
if (end_node == NULL)
{
return (NULL);
}
else
{
end_node->n = n;
end_node->next = NULL;
}
if (*head == NULL)
{
*head = end_node;
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = end_node;
end_node->next = NULL;
return (end_node);
}
