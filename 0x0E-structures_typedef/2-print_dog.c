#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function with which returns void
 * @d: is a pointer variable of type dog type struct
*/


void print_dog(struct dog *d)
{
int flag = 1;
if (d == NULL)
{
return;
}
if (!(d->name))
{
flag = 0;
printf("(nil)\n");
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
if (!(d->age))
{
flag = 0;
printf("Name: %s\n", d->name);
printf("(nil)\n");
printf("Owmer: %s\n", d->owner);
}
if (!(d->owner))
{
flag = 0;
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("(nil)\n");
}
if (d)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
}
