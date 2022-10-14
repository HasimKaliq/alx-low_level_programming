#include <stdio.h>
#include <stdarg.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */



int sum_them_all(const unsigned int n, ...)
{
    unsigned int sum, i;

    /* This gathers all the argunments va_list name of list */
    va_list args; 

    if(n == 0)
        return (0);
    /* va_start gets the first compulsory argunment va_start(args, n == is the varibale for the compulsory) */
    va_start(args, n); 

    /* var_args this takes in all the argunments and the data type. */
    for(i = 0; i < n; i++)
    {
        sum+= va_arg(args, int); 
    }
    return (sum);
}


int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
