
#include "main.h"

int _strcmp(char *s1, char *s2)
{
    int counter,compVal;
    
    counter = 0;
    
    while (si[counter] == s2[counter] && s1[counter] != '\0') {
        counter++;
    }
    compVal = s1[counter] - s2[counter];
    return (compVal);
}
