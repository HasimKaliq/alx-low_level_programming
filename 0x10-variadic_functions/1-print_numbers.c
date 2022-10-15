#include "variadic_functions.h"


/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{   
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
int numbers = va_arg(args, int);
printf("%c %d", *separator, numbers);
}
printf("\n");
}
