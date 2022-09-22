
#include "main.h"

void
reverse_array(int *a, int n)
{
int start,end;
for (end = n - 1; end > n/2; end --)
{
start = a[n - 1 - end];
a[n - 1 - end] = a[end];
a[end] = start;
}
}
