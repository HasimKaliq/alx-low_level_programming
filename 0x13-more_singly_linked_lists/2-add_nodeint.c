#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = NULL;
    new_node = malloc(sizeof(listint_t);
    if (new_node == NULL)
    {
        return (NULL);
    }
    
    
    if (*head == NULL)
    {
        new_node->n = n;
        new_node->next = NULL
        *head = new_node;
    }
    
    new_node->n = n;
    new_node->next = *head;
    *head = new_node;
    return(*head);
}
