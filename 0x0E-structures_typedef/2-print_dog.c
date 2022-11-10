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
  
switch(d)
{
	case(!(d->name))
		printf("(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owmer: %s\n", d->owner);
		break;
	
	case(!(d->name))
		printf("(nil)\n");
		printf("Age: %f\n", d->age);
  		printf("Owmer: %s\n", d->owner);
  		break;
  
	case(!(d->name))
  		printf("(nil)\n");
  		printf("Age: %f\n", d->age);
  		printf("Owmer: %s\n", d->owner);
  		break;
 	
	default:
   	 	printf("Name: %s\n", d->name);
    		printf("Age: %f\n", d->age);
  	  	printf("Owmer: %s\n", d->owner);
    
}
}
