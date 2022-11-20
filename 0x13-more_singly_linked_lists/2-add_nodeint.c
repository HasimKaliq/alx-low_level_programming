#include "lists.h"
/**
 * print_listint - add node to the start of a list.
 * @head: a variable of type listint_t
 * @n: the value to be stored
 * Return: the new of node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
if (*head == NULL)
{
new_node->n = n;
new_node->next = NULL;
*head = new_node;
return (*head);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (*head);
}
