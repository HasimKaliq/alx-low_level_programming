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
int i = 0;
int size = 13;
new_memory = malloc(size * sizeof(char));
if (new_memory == NULL || str == NULL)
{
return (NULL);
}
while (i <= size)
{
new_memory[i] = str[i];
i++;
}
return (new_memory);
free(new_memory);
}
