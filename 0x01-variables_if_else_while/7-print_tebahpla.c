#include <stdio.h>
int
main(void)
{
char lowerCase;
for (lowerCase = 'z'; lowerCase <= 'a'; lowerCase--)
{
putchar(lowerCase);
}
putchar('\n');
return (0);
}
