#include <stdio.h>
#include "main.h"
int main(void) 
{
char setOfText[] = "_putchar";
int i;
for (i = 0; i <= 7; i++) 
{
_putchar('%d', setOfText[i]);
}
_putchar('\n');
return (0);
}
