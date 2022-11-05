
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
  
char *newstr;
newstr = strdup(str);
    

list_t *first_node;
first_node = malloc(sizeof(list_t));

if(first_node == NULL)
  return (NULL);
    

if(newstr == NULL)
    return(NULL);
    free(first_node);
    
first_node -> len = _strlen(newstr);
first_node -> str = newstr;
first_node ->next = *head;
*head = first_node;
return (*head);
free(first_node);
}
