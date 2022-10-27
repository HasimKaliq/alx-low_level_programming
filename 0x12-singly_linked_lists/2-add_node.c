
/**
 * add_mode - returns the added node in a linked list_t list
 * @head: head of linked list
 * @str: string to be duplicated
 * Return: number of elements in list_t
 */

#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
if (head == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->next = *head;

*head = new_node;
return (new_node);
}
