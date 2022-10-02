#include "main.h"


/*
* This program is meant to showcase how to get the absolute value of a number.
* without using any hader methods
* The program simply takes a negative number and multiplies it by -1
causing the same value to appear but wih a +
* And all positive numbers are returned as
* they are because they are already in their absolute value,
* EDGE CASES: Decimal numbers, Fractions.
*/


int
_abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
return (0);
}
