#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    
    unsigned int i;    
    va_list args;
    if(*separator == '\0') {
    
    }
    va_start(args, n);

    for(i = 0; i < n; i++) {
        int numbers = va_arg(args, int);
        _putchar("%c %d", *separator, numbers);
    }

}
