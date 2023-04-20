#include <stdio.h>
#include <stdlib.h>

/**
* main - program prints the opcodes of its own main function
* @argc: atgument count
* @argv: argument vector
*
* Return: 0 always
*/
int main(int argc, char *argv[])
{
	char *opcodes = (char *) main;
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%.2hhx", opcodes[i]);

		if (i < bytes - 1)
			putchar(' ');
		else
			putchar('\n');
	}

	return (0);
}
