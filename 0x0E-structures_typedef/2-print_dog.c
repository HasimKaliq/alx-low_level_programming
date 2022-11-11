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
else
{
printf("Name: %s\n", d->name);
}
if(d->age < 1)
{
printf("(nil)\n");
}
else
{
printf("Age: %f\n", d->age);
}
if (d->owner == NULL)
{
printf("(nil)\n");
}
else
{
printf("Owmer: %s\n", d->owner);
}
}
