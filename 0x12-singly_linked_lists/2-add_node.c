#include "lists.h"


list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int count;
char  *dup;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

dup = strdup(str);
if (dup == NULL)
free(new_node);
return (NULL);
for (count = 0; dup[count] != '\0'; count++);
count++;

new_node->str = dup;
new_node->len = count;
new_node->next = *head;
*head = new_node;
return(new_node);
}
