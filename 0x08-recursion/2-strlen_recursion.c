#include "main.h"

int length;
/**
*  _strlen_recursion -  prints a string the length of a string.
* @s: string to print
*/
int _strlen_recursion(char *s)
{ 
/* The basecase */
if(*s == '\0'){
    return length;
    putchar('\n');
}

    s++;
    length += 1; 
    _strlen_recursion(s);
    
}
