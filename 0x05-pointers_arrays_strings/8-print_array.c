#include "main.h"
#include <stdio.h>


void
print_array(int *arr, int size)
{
int i;
for (i = 0; i < size; i++)
     {
             if(size == 0) {
                printf("%d", arr[0]);
             }
             else
             {
                     printf(", %d", arr[i]);
             }
     }
     printf("\n");
     
     }
