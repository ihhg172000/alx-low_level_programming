#include <stdio.h>

/**
* main - that prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: 0 Always
*/
int main(void)
{
	int count;
	long int prev_fab = 0;
	long int curr_fab = 1;

	for (count = 1; count <= 50; count++)
	{
		long int fab = prev_fab + curr_fab;

		if (count == 1)
			putchar('1');
		else
		{
			printf("%ld", fab);
			prev_fab = curr_fab;
			curr_fab = fab;
		}

		if (count < 50)
			printf(", ");
	}

	putchar('\n');

	return (0);
}
