
#include "main.h"

/**
* factorial(int n) - The function to return an int
* @n: The number to which we need to get the factorial
* Return: A return of the factorial
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n-1));
}
