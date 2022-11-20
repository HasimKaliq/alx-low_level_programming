#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node;
listint_t *temp;
temp = *head;
end_node = malloc(sizeof(listint_t));
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
while (temp)
{
temp = temp->next;
}
temp->next = end_node;
return (end_node);
}
