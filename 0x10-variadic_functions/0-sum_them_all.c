#include "variadic_functions.h"
/**
 * sum_them_all - sums and returns total
 * @n: madatory varibale, later argunment
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int sum, i;

/* This gathers all the argunments va_list name of list */
va_list args;

if (n == 0)
return (0);
/** va_start gets the first compulsory argunment va_start */
va_start(args, n);

/* var_args this takes in all the argunments and the data type. */
for (i = 0; i < n; i++)
sum += va_arg(args, int);
return (sum);
}

