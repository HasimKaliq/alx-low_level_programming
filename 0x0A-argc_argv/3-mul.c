#include <stdio.h>
#include <stdlib.h>

/**
* main - expects a return of int
* @argc: an argument counter
* @argv: an array for storing the arguments
* Return: return 0 if successful 1 if not
*/

int
main(int argc, char* argv[])
{
int i;
if (argc - 1 < 2)
{
printf("Error\n");
return (1);
}
else if (argc - 1 == 2)
{
for (i = 1; i < argc-1; i++)
{
int multiplaction = atoi(argv[i]) * atoi(argv[i+1]);
printf("%d\n", multiplaction);
}
}
return (0);
}
