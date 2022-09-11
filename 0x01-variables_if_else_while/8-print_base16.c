#include <stdio.h>
int 
main(void) 
{
int val;
for (val = 0; val < 10; val++)
{
        putchar(val + '0');
}
int alpha;
char sixAlpha[] = "abcdef";
for (alpha = 0; alpha <= 5; alpha++)
{
        putchar(sixAlpha[alpha]);
}
putchar('\n');
return (0);
}
