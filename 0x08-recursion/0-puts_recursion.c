
#include "main.h"

/**
 * @s: a parameter of type char
 * The program prints out a string using recursion

 *  _puts_recursion -  prints a string, followed by a new line.
 * 
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
