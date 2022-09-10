#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("and is greater than %d\n", n);
	else if (n == 0)
		printf("and is %d", n);
	else if(n < 6 && != 0)
		printf("and is less than %d and not 0\n", n); 
	/* your code goes there */
	return (0);
}
