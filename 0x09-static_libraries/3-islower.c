#include "main.h"
/*
 * The program below is intended to return 1 if c is a lower
 * and return 0 if it's not.
 * The code leaves in the method int _islower(int c)
 * it has a return type of int and a parameter of type int
 * in lowercase, while using the _putchar().
 * This program below makes use of the
 * ASCII table to determine if the character entered
 * was a lowercase or an upper case character,
 * this works because under the hood,
 * characters are just integers and strings
 * are a set of characters which means they
 * are all just a bunch of int's, all that was left to do is specify
 * a range and use an operator on the range
 * and whola! you have your self,
 * an ASCII checker or lower or upper case checker.
*/
int
_islower(int c)
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
