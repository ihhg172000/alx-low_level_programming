#include <stdio.h>

/**
* main - prints sum of the even-valued fibonacci terms do not exceed 4000000
*
* Return: 0 Always
*/
int main(void)
{
	int prev_fab = 1;
	int curr_fab = 1;
	long int sum = 0;

	while (curr_fab <= 4000000)
	{
		int fab = prev_fab + curr_fab;

		if ((curr_fab % 2) == 0)
			sum += curr_fab;

		prev_fab = curr_fab;
		curr_fab = fab;
	}

	printf("%ld\n", sum);

	return (0);
}
