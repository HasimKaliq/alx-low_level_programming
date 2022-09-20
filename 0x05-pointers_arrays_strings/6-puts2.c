#include "main.h"

void puts2(char *s) {
   int i;
   for(i = 0; s[i] != '\0'; i++) {
       _putchar(s[i*2]);
       if(s[i*2] == '\0') {
           break;
       }
   }
   _putchar('\n');
}
