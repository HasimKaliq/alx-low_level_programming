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
    int i = 0;
    new_memory = (char*)malloc(160 * sizeof(char));
    
    if(new_memory == NULL || str == NULL) {
        return (NULL);
    }
    
    
    while (str[i] != '\0'){
        new_memory[i] = str[i];
        i++;
            
    }            
    return (new_memory);
    free(new_memory);
}
