#include "main.h"



/* Write a function that prints a string, in reverse, followed by a new line. */

void
print_rev(char *s)
{
int i = _strlen(s);
i = i - 1;
while(i >= 0)
{

_putchar(s[i]);

}
_putchar('\n');
}


int
_strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{}
return (i);

}
