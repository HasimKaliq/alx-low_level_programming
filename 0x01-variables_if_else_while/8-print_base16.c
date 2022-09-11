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
for (val = 'a'; val <= 'f'; val++) 
{
        putchar(val);
    }
    putchar('\n');
    return (0);
}
