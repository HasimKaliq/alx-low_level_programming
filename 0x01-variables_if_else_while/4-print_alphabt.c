#include <stdio.h>
int
main(void)
{
char lowerCase;
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
if (lowerCase == 'q' || lowerCase == 'e')
{
continue;
}
else
{
putchar(lowerCase);
}
}
putchar('\n');
return (0);
}
