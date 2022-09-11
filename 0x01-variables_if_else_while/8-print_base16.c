#include <stdio.h>
int 
main(void) 
{
    int val;
for (val = 0; val < 10; val++)
{
        putchar(val + '0');
    }
    int a;
for (a = 'a'; a <= 'f'; a++) 
{
        putchar(a);
    }
    putchar('\n');
    return (0);
}
