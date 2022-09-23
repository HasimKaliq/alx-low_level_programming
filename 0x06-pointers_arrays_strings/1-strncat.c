#include "main.h"



char
*_strncat(char *dest, char *src, int n)
{

int srcIndex = 0, dest_len = 0;

while (dest[srcIndex++])
	dest_len++;

for(srcIndex = 0; src[srcIndex] && srcIndex < n; srcIndex++)
	dest[dest_len++] = src[srcIndex];
        
return (dest);
}

