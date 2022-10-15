#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    
    register unsigned int i;    
    va_list args;
    va_start(args, n);

    for(i = 0; i < n; i++) {
        printf("%d%s",va_arg(args, int), (seperator && i != n-1) ? seperator : "");
    }

}
