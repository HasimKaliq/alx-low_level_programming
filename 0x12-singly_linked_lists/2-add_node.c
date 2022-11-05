
/**
 * add_mode - returns the added node in a linked list_t list
 * @head: head of linked list
 * @str: string to be duplicated
 * Return: number of elements in list_t
 */

#include "lists.h"


unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}


list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    new_node = malloc(list_t);
    
    if(new_node == NULL) {
        return (NULL);
    }
    new_node->str = strdup(str);
    if(new_node->str == NULL) {
        free(new_node);
        return(NULL);
    }
    new_node->len = _strlen(new_node->str);
    new_node->next = *head;
    
    *head = new_node;
    return(*head);
}
