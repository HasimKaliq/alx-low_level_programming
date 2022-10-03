#include <stdio.h>

/**
* main - expects a return of type int.
* @argc: size of the commands passed.
* @argv: an arrray that holds the commands.
* Return: return an int.
*/


int main(int argc, char* argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
