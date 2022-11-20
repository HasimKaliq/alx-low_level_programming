listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node;
listint_t *temp;
end_node = malloc(sizeof(listint_t));
if (!end_node || !head)
{
return (NULL);
}
end_node->n = n;
end_node->next = NULL;

if (!*head)
{
*head = end_node;
}
else
{
temp = *head;
while (temp->next)
{
temp = temp->next;
}
temp->next = end_node;
}
return (end_node);
}
