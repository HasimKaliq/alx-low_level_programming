#include <stdio.h>
int
main(void)
{
int numVal;
for (numVal = 0; numVal < 10; numVal++)
{
        putchar(numVal + '0');
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
