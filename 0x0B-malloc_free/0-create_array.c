#include <stdio.h>
#include <stdlib.h>

/**
   * create_array = create and return a character(s)
   * @size: size of array
   * @c: character to be stored.
   * Return: an array
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
