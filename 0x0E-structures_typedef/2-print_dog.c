#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if(d->name == NULL)
{
printf("nil\n");
}
if(d->age == NULL)
{
printf("nil\n");
}
if(d->owner == NULL)
{
printf("nil\n");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
