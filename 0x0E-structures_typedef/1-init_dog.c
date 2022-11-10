#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function with a void return type
 * d - is a pointer of type dog type struct
 * @name: is a varible of type char
 * @age: is a variable of type int
 * @owner: is a variable of type char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if(d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
