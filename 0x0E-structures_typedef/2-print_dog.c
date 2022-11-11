#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function with which returns void
 * @d: is a pointer variable of type dog type struct
*/


void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("(nil)\n");
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
if (d->age < 1)
{
printf("Name: %s\n", d->name);
printf("(nil)\n");
printf("Owmer: %s\n", d->owner);
}
if (d->owner == NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("(nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
}
