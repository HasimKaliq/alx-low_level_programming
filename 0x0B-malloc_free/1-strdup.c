#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */

char *_strdup(char *str)
{
char *new_memory;
int i, j;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
;
i++;
new_memory = malloc(i *sizeof(char));
if (new_memory == NULL)
return (NULL);
for (j = 0; j <= i; j++)
{
new_memory[j] = str[j];
}
return (new_memory);
free(new_memory);
}
