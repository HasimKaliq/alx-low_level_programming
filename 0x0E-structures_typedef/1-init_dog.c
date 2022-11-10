#include "dog.h"
#include <stdlib.h>
/**
 * d - is a pointer of type dog type struct
 * @name: is a varible of type char
 * @age: is a variable of type int
 * @owner: is a variable of type char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog my_dog;
my_dog.name = name;
my_dog.age = age;
my_dog.owner = owner;

}
