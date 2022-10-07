#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked = returns an address 
 * @b: parameter of type unsigned int
 * Returns: a pointer to the allocated memory
 */ 

void *malloc_checked(unsigned int b)
{
int *memory;
if(b == 0)
return (NULL);
memory = malloc(sizeof(b));
if(memory == 0)
exit (98);
return (memory);
}
