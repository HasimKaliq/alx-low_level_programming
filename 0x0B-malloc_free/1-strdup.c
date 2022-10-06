#include <stdio.h>
#include <stdlib.h>

/**
 * Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string which is a duplicate of the string str. 
 * Memory for the new string is obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
*/


char *_strdup(char *str) {
    char *new_memory;
    new_memory = (char*)malloc(100 * sizeof(char));
    if(new_memory == NULL || str == NULL) {
        return (NULL);
    }
    else
        new_memory = str;
    return (new_memory);
    free(new_memory);
}
