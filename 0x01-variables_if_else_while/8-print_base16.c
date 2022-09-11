#include <stdio.h>
int 
main(void) 
{
    int val;
for (val = 0; val < 10; val++)
{
        putchar(val + '0');
}
int lowerCase;
for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase ++)
{
        putchar(lowerCase);
}
putchar('\n');
    return (0);
}
