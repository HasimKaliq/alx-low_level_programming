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

    
if(separator != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if(i != n-1) {
    printf("%c", separator);
}
}

}
else {
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
}
printf("\n");
}
}
