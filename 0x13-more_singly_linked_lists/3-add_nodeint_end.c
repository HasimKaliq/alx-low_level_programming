#include "lists.h"



listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp; 
temp = *head;
listint_t *end_node;

end_node = malloc(sizeof(listint_t));

if (end_node == NULL)
{
return (NULL);
}
  
if (temp == NULL)
{
end_node->n = n;
end_node->next = NULL;
}
end_node->n = n;
end_node->next = NULL;

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = end_node;
return(temp);
}
