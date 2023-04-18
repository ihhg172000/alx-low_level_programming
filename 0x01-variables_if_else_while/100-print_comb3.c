#include <stdio.h>

/**
* main - program prints all unique combinations of two digits
*
* Return: 0 always
*/
int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
		{
			putchar(first_digit + 48);
			putchar(second_digit + 48);

			if (first_digit  < 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
	}

	return (0);
}
