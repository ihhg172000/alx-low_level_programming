#include <stdio.h>

/**
* main - prints the largest prime factor of the number 612852475143
*
* Return: 0 Always
*/
int main(void)
{
	long n = 612852475143;
	long factor;

	long count;

	for (count = 1; count <= n; count++)
	{
		if (n % count == 0)
		{
			factor = count;
			n /= count;
			continue;
		}
	}

	printf("%ld\n", factor);

	return (0);
}
