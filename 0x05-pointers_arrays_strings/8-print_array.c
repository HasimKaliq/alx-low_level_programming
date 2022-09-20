#include "main.h"
#include <stdio.h>


void
print_array(int *arr, int size)
{
if(size == 0)
{
printf("Size cannot be zero");
}
else
{
int i = 0;
while(i <= size)
{
printf("%d, ", arr[i]);
i++;
        
}

}
}
