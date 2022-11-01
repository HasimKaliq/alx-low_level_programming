#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int val = 0;
    int i = 0;
    /* A check if all the character at b are all 1's or 0's */    
    if (b == NULL)
        return (0);
    
    while(b[i] == '0' || b[i] == '1') {
        val <<= 1;
        val += b[i] - '0';
        i++;
    }
    return (val);
}
