#ifndef DOG_H
#define DOG_H
/**
* struct dog - is a struct of type doog
* @name: is a varible of type char
* @age: is a variable of type int
* @owner: is a variable of type char
*/
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
