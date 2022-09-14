#include "main.h"
/*
 * The program below is intended to return 1 if c is a lower
 * and return 0 if it's not.
 * The code leaves in the method int _islower(int c)
 * it has a return type of int and a parameter of type int
 * in lowercase, while using the _putchar().
*/
int _islower(int c)
{

if (c > 64 && c < 91)
{
return (0);
}
else if (c > 96 && c < 123)
{
return (1);
}
return (0);
}
