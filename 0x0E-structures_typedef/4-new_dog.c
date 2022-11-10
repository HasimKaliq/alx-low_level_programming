#include "dog.h"
#include <strings.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	if(name && owner == NULL)
	{
		return (NULL);
	}
	dog.name = strcpy(name);
	dog.age = age;
	dog.owner = strcpy(owner);
	return (dog);
}
