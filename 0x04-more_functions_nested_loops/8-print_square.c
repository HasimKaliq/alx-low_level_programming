
#include "main.h"

void print_line(int n)
{   
    int i, j;
    if(n <= 0) {
        _putchar('\n');
    }
    else {
        for(int i = 1; i <= n; i++){
            _putchar('#');
            for(int j = 2; j <= n; j++) {
                _putchar('#');
               
            }
    }
}
}
