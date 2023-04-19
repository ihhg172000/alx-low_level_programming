#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main -  program performs simple operations
* @argc: argument count
* @argv: argument vector
*
* Return: 0 always
*/
int main(int argc, char *argv[])
{
	int res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
