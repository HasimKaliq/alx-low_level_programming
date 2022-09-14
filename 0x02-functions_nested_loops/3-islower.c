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
int asciiValue = ("%d", c);
if (asciiValue > 64 && asciiValue < 91)
{
return (0);
}
else if (asciiValue > 96 && asciiValue < 123)
{
return (1);
}
}
