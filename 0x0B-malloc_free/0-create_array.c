#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *s;
    unsigned int i;
    s = malloc((size) * sizeof(char));
    
    if (s == 0) {
        return (NULL);
    }
    
    i = 0;
    while (i < size)
    {
        /* code */
        s[i] = c;
        i++;
    }
    return (s);
}
