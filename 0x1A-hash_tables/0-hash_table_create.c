#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size)
{
    hash_node_t *hash_table;
    int *addr_of_hash_table;
    hash_table = malloc((size) * sizeof(hash_node_t));
    addr_of_hash_table = &hash_table;
    if(hash_table == NULL){
        return NULL;
    }
    else{
        return(addr_of_hash_table);
    }
}

