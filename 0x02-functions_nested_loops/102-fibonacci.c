#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: 0 Always
*/
int main(void)
{
	int count;
	long int prev_fab = 1;
	long int curr_fab = 1;

	for (count = 1; count <= 50; count++)
	{
		long int fab = prev_fab + curr_fab;

		printf("%ld", curr_fab);
		prev_fab = curr_fab;
		curr_fab = fab;

		if (count < 50)
			printf(", ");
	}

	putchar('\n');

	return (0);
}
