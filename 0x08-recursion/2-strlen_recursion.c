#include "main.h"


/**
*  _strlen_recursion -  prints a string the length of a string.
* @s: string to print
*/
int length; 
int _strlen_recursion(char *s)
{
  if(*s == '\0'){
    return length;
}

s++;
length += 1;
_strlen_recursion(s);
return (0); 
}

