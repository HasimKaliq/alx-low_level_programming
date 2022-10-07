#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * Write a function that allocates memory using malloc.
 * Prototype: void *malloc_checked(unsigned int b);
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
 */ 

void *malloc_checked(unsigned int b) 
{
    int *memory;
    if(b == NULL) {
        return (NULL);
    }
    memory = malloc(sizeof(b));
    if(memory == NULL) {
        exit (98);
    }
    return (memory);
}
