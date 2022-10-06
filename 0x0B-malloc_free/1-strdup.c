#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup = returns a pointer of type char
 * @str: the input character
 * Return: the new memory location of the str
*/


char *_strdup(char *str) {
    
    char *new_memory;
    int i = 0;
    int size = 13;
    new_memory = malloc(size * sizeof(char));
    
    if(new_memory == NULL || str == NULL) {
        return (NULL);
    }
    
    
    while (i <= size){
            new_memory[i] = str[i];
            i++;
        }           
    return (new_memory);   
    free(new_memory);
}
