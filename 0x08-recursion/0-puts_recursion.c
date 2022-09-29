
#include "main.h"

/**
*  _puts_recursion -  prints a string, followed by a new line.
* @s: a parameter of type char, that will; contain the string; to print
*/

void _puts_recursion(char *s)
{

/*The base case.*/
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
