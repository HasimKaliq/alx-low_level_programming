
#include "main.h"

/**
*  factorial(int n) -  returns an int.
* @n: to find it's factorial.
* Return: intger.
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n-1));
}
