#include "main.h"

int length;
int _strlen_recursion(char *s)
{ 
// The base case
if(*s == '\0'){
    return length;
    putchar('\n');
}

    s++;
    length += 1; 
    _strlen_recursion(s);
    
}
