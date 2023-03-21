#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: the number to be incremented or decrement until 98
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}
	}

	printf("98\n");
}
