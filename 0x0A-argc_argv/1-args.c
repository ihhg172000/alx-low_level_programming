#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it
* @argc: argument count
* @argv: argument vector
*
* Return: 0 allways
*/
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
