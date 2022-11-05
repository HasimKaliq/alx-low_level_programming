
/**
 * add_mode - returns the added node in a linked list_t list
 * @head: head of linked list
 * @str: string to be duplicated
 * Return: number of elements in list_t
 */

#include "lists.h"

int _strlen(char *s){
    int i;
    i = 0;
    while(s[i] != '\0'){
        ++i;
    }
    return (i);
}


list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    new_node = malloc(list_t);
    
    if(new_node == NULL) {
        return (NULL);
    }
    new_node -> str = strdup(str);
    new_node -> len = _strlen(str);
    new_node -> next = *head;
    
    *head = new_node;
    return(*head);
    free(new_node);
}
