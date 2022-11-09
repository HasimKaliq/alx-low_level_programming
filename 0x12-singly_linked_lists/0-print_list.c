#include "lists.h"


size_t print_list(const list_t *h)
{
int count;
list_t *temp = h;
if (temp->str == NULL)
{
printf("[0] (nil)");
}
for (count = 0; temp->next != NULL; count++)
{
printf("[%d] %s\n", temp->len, temp->str);
temp = temp->next;
}
return(count);
}
