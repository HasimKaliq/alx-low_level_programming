
#include "main.h"

char *_strcat(char *dest, char *src) {
    int destVal,srcVal;
    
    for(destVal = 0; dest[destVal] != '\0'; destVal++)
    for(srcVal = 0; src[srcVal]; srcVal++) {
        dest[destVal++] = src[srvVal];
        return (dest);
    }
}
