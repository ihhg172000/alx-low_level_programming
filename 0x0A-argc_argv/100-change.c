#include <stdio.h>
#include <stdlib.h>

/**
* main - program that prints the minimum number of coins to make change
* @argc: argument count
* @argv: argument vector
*
* Return: 1 if the number of arguments not exactly 1. 0 otherwise
*/
int main(int argc, char *argv[])
{
	int coines = 0, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	while (amount > 0)
	{
		if (amount >= 25)
		{
			coines += (amount / 25);
			amount = amount % 25;
		}
		else if (amount >= 10)
		{
			coines += (amount / 10);
			amount = amount % 10;
		}
		else if (amount >= 5)
		{
			coines += (amount / 5);
			amount = amount % 5;
		}
		else if (amount >= 2)
		{
			coines += (amount / 2);
			amount = amount % 2;
		}
		else
		{
			coines += (amount / 1);
			amount = amount % 1;
		}
	}
	printf("%d\n", coines);
	return (0);
}
