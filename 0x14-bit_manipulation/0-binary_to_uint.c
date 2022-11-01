
#include "main.h"

unsigned int core(unsigned int base, unsigned int exp) {
    
    
    unsigned int product = 1;
    while (exp > 0)
    {
        /* code */
         
        product *= base;
        --exp;
    }
    return (product);
}



unsigned int binary_to_uint(const char *b)
{
   unsigned int index, exponent, charToInt, i;
    char setChar;
    unsigned int value, result = 0;
    /* A check if all the character at b are all 1's or 0's */    
    if (b == NULL)
        return (0);
    
    for(value = 0; b[value] != '\0'; value++);
    //printf("%d\n", value);
    value-=1;

    while (i < value)
    {
        /* code */
        if(b[i] != '0' && b[i] != '1')
        {
            return(0);
        }
        i++;
    }
    
    
    for(index = 0; b[index] != '\0'; index++) {
        if(b[index] != '0' && b[index] != '1' ){
            return (0);
        }
        else {
            
            setChar = b[index];
            charToInt = setChar - '0';
            //printf("%d\n", charToInt);
            
            if(charToInt == 1) {
                exponent = value - index;
                result += core(2, exponent);
            }

        }
    }
    return (result);
}

