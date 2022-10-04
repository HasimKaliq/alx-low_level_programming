#include <stdio.h>
#include <stdlib.h>


/**
* main - expects a return of int
* @argc: an argument counter
* @argv: an array for storing the arguments
* Return: return 0 if successful 1 if not
*/
int main(int argc, char *argv[])
{
if (argc - 1 < 2)
{
printf("Error\n");
return (1);
}
else if (argc - 1 == 2)
{
int multiplaction = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multiplaction);
}
return (0);
}
