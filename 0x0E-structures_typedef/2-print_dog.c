#include "dog.h"
#include <stdio.h>
/**
 * @d: is a pointer variable of type dog type struct
*/


void print_dog(struct dog *d)
int flag;
flag = 1;
{
if (d == NULL)
{
return;
}
if (!(d->name))
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
flag = 0;
}
if (!(d->age))
{
printf("Name: %s\n", d->name);
printf("Age: (nil)\n");
printf("Owmer: %s\n", d->owner);
flag = 0;
}
if (!(d->owner))
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: (nil)\n");
flag = 0;
}
if (flag == 1)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owmer: %s\n", d->owner);
}
}
