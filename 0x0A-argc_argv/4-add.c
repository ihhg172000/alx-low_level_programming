#include <stdio.h>
#include <stdlib.h>

int is_only_digits(char *s);

/**
* main - program that adds positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 1 If any number contains symbols that are not digits. 0 otherwise
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_only_digits(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

/**
* is_only_digits - function to determine whether string contains only digits.
* @s: string to test it
*
* Return: 0 if string contains symbols that are not digits. 1 otherwise
*/
int is_only_digits(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}

	return (1);
}
