#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that returns nothing 
 * @d: is a pointer variable of type dog type struct
*/
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
free(d->name);
free(d->owner);
free(d);
}
