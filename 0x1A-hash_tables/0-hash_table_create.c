#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: the size of the table
 * Return: the address of the new node, or NULL if it failed
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
table =  malloc(sizeof(hash_node_t));
if (table == NULL)
{
return (NULL);
}
table->size = size;
return (table);
}

