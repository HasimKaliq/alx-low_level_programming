#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */

char *_strdup(char *str)
{
char *new_memory;
int i, j, k;
int size = 13;
new_memory = malloc(size * sizeof(char));
if (new_memory == NULL || str == NULL)
{
return (NULL);
}
for(i = 0; str[i]; i++)
 i++;
for(j = 0; j < 1; j++)
{
new_memory[j] = str[j];
}
return (new_memory);
free(new_memory);
}
