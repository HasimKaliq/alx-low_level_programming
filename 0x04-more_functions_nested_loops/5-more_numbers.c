#include "main.h"

void
more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++) 
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
putchar((j / 10) + '0');
putchar((j % 10) + '0');
}
}
return (0);
}