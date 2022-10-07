#include <stdio.h>
#include <stdlib.h>

/**
 * Write a function that allocates memory using malloc.
 * Prototype: void *malloc_checked(unsigned int b);
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
 */ 

void *malloc_checked(unsigned int b) 
{
    unsigned int *memory;
    if(b == NULL) {
        return (NULL);
    }
    memory = malloc(b * sizeof(unsigned int));
    if(memory == NULL) {
        return (98);
    }
    return (*memory);
}
