
#include "main.h"


void _puts_recursion(char *s)
{

    /*The base case.*/
    if(*s == '\0'){
        _putchar('\n'); 
    }
    _putchar(*s);
    _puts_recursion(++s);         
}
