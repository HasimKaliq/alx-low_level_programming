#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *s;
    unsigned int i;
    
    if (size == 0) {
        return (NULL);
    }
    
    if( s = malloc((size) * sizeof(char)) == NULL) {
        return (NULL);
    }
    else {
        i = 0;
        while (i < size)
        {
            /* code */
            s[i] = c;
            i++;
        }
    }
    return (s);
}
