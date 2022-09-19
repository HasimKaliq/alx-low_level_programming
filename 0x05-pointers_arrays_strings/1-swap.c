#include "main.h"

void
swap_int(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;        
}
