#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be malloced
 * Return: returns a void pointer
 */

void *malloc_checked(unsigned int b)
{
int *memory;
if (b == 0)
return (NULL);
memory = malloc(b);
if (memory == 0)
exit(98);
return (memory);
}
