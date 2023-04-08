#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 1 If the program does not receive two arguments. 0 otherwise
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}
