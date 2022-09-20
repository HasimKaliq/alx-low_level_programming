#include "main.h"
#include <stdio.h>


void
print_array(int *arr, int size)
{
int i;
for (i = 0; i < size; i++)
{
if (i == 0)
{
printf("%d", arr[i]);
}
else
{
printf(", %d", arr[i]);
}
}
printf("\n"); 
}
