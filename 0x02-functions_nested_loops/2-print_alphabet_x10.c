#include <stdio.h>
#include "main.h"
/*
 * The program below is intended to print the letters a-z x10
 * The code leaves in the method void print_alphabet(void)
 * it has a return type of void and a parameter of void
 * in lowercase, while using the _putchar() method that leaves in the
 * main.h file.
*/

void print_alphabet_x10(void)
{
int i, j;
for (j = 1; j <= 10; j++) {
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
