#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char* temp
    int count;
    
    
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL){return (NULL);}
    
    temp = strdup(str);
    
    
    for(count = 0; str[count] != '\0'; count++);
    new_node -> str  = temp;
    new_node -> len = count;
    new_node -> next = *head;
    
    *head = new_node;
    free(new_node);
    return(*head);
}
