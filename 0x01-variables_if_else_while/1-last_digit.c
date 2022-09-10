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
		printf("Last digit of %d is greater than\n", n);
	else if (n == 0)
		printf("Last digit of %d is 0\n", n);
	else if(n < 6 && n != 0)
		printf("Last digit of %d and is less than 6 and not 0\n", n); 
	/* your code goes there */
	return (0);
}
