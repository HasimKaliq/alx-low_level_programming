#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array or NULL if malloc fails
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

s = malloc((size) * sizeof(char));
if (size == 0 || s == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{

s[i] = c;
i++;
}
return (s);
}
