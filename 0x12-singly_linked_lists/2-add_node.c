#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int count;
char  *dup;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}


dup = strdup(str);
if (dup == NULL)
{
free(new_node);
return (NULL);
}
for (count = 0; str[count] != '\0'; count++);
count++;

new_node->str = dup;
new_node->len = count;
new_node->next = *head;
*head = new_node;
free(new_node);
}
