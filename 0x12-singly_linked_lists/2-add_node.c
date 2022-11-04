
/**
 * add_mode - returns the added node in a linked list_t list
 * @head: head of linked list
 * @str: string to be duplicated
 * Return: number of elements in list_t
 */

#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
    char *str_cpy;
    list_t *first_node;
    first_node = malloc(sizeof(list_t));

    if(first_node == NULL) {
        return (NULL);
    }
    str_cpy = strdup(str);
    first_node -> str = str_cpy;
    first_node ->next = *head;
    *head = first_node;
    return (head);
}
