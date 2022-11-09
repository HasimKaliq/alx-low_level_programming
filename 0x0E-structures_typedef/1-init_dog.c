
/**
 * d - is a pointer of type dog type struct
 * @name: is a varible of type char
 * @age: is a variable of type int
 * @owner: is a variable of type char
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
dog *dog = d;
d->name = name;
d->age = age;
d->owner = owner;
}
