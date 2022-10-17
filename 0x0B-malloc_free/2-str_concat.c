#include <stdlib.h>


/**
 * str_concat - the function return an address of a concatinated string
 * @s1: first character
 * @s2: second character
 * Return: the address of the new memory
 */

char *str_concat(char *s1, char *s2)
{
char *memory;
int counter, i;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}


for (i = 0; s1[i] != '\0'; i++);
memory = malloc(sizeof(char));

if (memory == NULL)
{
return (NULL);
}

for (counter = 0; s1[counter] != '\0'; counter++)
{
memory[counter] = s1[counter];
}


for (counter = 0; s2[counter] != '\0'; counter++)
{
memory[i] = s2[counter];
i++;
}

memory[i] = '\0';

return (memory);
}

