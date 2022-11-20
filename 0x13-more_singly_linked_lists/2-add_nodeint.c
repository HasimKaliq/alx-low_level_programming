#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (!new_node || !head)
{
return (NULL);
}
if (!*head)
{
new_node->n = n;
new_node->next = NULL;
*head = new_node;
return (*head);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
