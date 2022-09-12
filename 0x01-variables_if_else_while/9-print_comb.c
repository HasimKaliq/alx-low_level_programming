#include <stdio.h>
int
main()
{
int a;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
if (a != 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
