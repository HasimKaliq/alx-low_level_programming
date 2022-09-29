
#include "main.h"


void _puts_recursion(char *s)
{

    /*The base case.*/
    if(*s == '\0'){
        return; 
    }
    _putchar(*s);
    _puts_recursion(++s);         
}

int main(void)
{
    /* code */
    _puts_recursion("Solve it recursively or pull out your hair doing so."); 
    return (0);
}
