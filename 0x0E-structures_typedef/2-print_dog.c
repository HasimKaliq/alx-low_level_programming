#include "dog.h"
#include <stdio.h>
/**
 * d - is a pointer of type dog type struct
*/


void print_dog(struct dog *d)
{
if(d == NULL)
{
return;
}
if(!(d->name))
{
printf("(nil)\n");
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
if(!(d->age))
{
printf("Name: %s\n", d->name);
printf("(nil)\n");
printf("Owmer: %s\n", d->owner);
}
if(!(d->owner))
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("(nil)\n");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
