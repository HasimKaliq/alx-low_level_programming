#include "lists.h"
#include <string.h>
/**
 * add_node_end - Add a node at the end of the list
 * @head: a pointer to a pointer of type list_t
 * @str: the string to be copied into the new node
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *end_node;
char *dup;
int count;
list_t *last;
end_node = malloc(sizeof(list_t));
if(end_node == NULL)
{
return (NULL);    
}
last = *head;
dup = strdup(str);
if (dup == NULL)
{
free(end_node);
return(NULL);
}
for(count = 0; str[count] != '\0'; count++);
end_node->str = dup;
end_node->len = count;
end_node->next = NULL;
if(*head == NULL)
{
*head = end_node;
return (*head);
}  
 
while (last->next != NULL)
{
last->next = end_node;
}

return (end_node);
}
