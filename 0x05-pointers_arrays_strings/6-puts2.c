#include "main.h"

void puts2(char *s) {
   int i = 1 - (_strlen(s));
   int j;
   while(j = 0 < i)  {
    putchar(s[j*2]);  
      
   }
    putchar('\n');  
}

int
_strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{}
return (i - 1);

}
