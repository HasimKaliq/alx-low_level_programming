
#include "main.h"

void reverse_array(int *a, int n) {
    int i;
    for(i = 0; n >= i; n--) {
        printf("%d",a[n]);
    }
}
