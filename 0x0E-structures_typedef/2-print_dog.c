#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if(d->name == NULL)
{
printf("nil");
}
if(d->age == NULL)
{
printf("nil");
}
if(d->owner == NULL)
{
printf("nil");
}
printf("Name: %s", d->name);
printf("Age: %f", d->age);
printf("Owmer: %s", d->owner);
}
