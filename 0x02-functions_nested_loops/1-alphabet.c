#include <stdio.h>
#include <main.h>

/*
 * The program below is intended to print the letters a-z
 * in lowercase, while using the _putchar() method that leaves in the 
 * main.h file.
*/

int main()
{
  int i;
  for (i = 'a'; i <= 'z'; i++)
{
  _putchar(i);
}
  _putchar('\n');
  return (0);
}
