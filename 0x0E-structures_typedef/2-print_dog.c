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
}
if (d->age < 1)
{
printf("(nil)\n");
}
if (d->owner == NULL)
{
printf("(nil)\n");
}
}
