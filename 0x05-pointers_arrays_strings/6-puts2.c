#include "main.h"

void puts2(char *s) {
   int i = 1 - (_strlen(s));
   int j;
   for(j = 0l j < i; j++)  {
    _putchar(s[j*2]);  
   }
    _putchar('\n');  
}

int
_strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{}
return (i - 1);

}
