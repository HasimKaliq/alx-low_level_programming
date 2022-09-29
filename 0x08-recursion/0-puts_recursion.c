
#include "main.h"

/**
 * s: a parameter of type char
 * The program printsout a string using recursion
 */
void _puts_recursion(char *s)
{

/*The base case.*/
if (*s == '\0')
{
return;
}
_putchar(*s);
_puts_recursion(++s);
}
