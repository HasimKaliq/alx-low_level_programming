#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *s;
    int i;
    s = malloc((size + 1) * sizeof(char));
    if (size == 0) {
        return ('\0');
    }
    int i = 0;
    while (i < size)
    {
        /* code */
        s[i] = c;
        i++;
    }
    return (s);
}
