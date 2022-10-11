#include <stdio.h>

/**
 * main - prints the file name the c file was compiled from
 * @argc: a variable counter for commands
 * @argv: an array of char for commands that was passed in
 * Return - returns 0 if success else 1
*/

int main(int __attribute__ ((unused)) argc, char __attribute__ ((unused)) *argv[])
{
	printf("%s\n", __FILE__);
	return (0);
}
