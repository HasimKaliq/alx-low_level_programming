#include "main.h"
/*
 * The program below is intended to return 1 if c is a lower
 * or upper case or letter and return 0 if it's not.
 * The code leaves in the method int _isalpha(int c)
 * it has a return type of int and a parameter of type int
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
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
else if ( n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
return (0);
}
