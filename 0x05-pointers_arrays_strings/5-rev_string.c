
#include "main.h"

void rev_string(char *s) {
   
    int i = _strlen(s);
    
    while(i >= 0) {
        _putchar(s[i]);
        i--;
    }
}


int
_strlen(char *s)
{
int i;
for (i = 0; *s[i] != '\0'; i++)
{}
return (i);

}
