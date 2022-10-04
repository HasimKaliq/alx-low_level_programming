#include <stdio.h>

/**
* main - print number of arguments passed to program
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/

int main(int argc, char* argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
putchar('\n');
return (0);
}
