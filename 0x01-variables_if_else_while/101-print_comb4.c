#include <stdio.h>

/**
* main - program prints all unique combinations of three digits
*
* Return: 0 always
*/
int main(void)
{
	int first_digit;
	int second_digit;
	int third_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit <= 9; third_digit++)
			{
				putchar(first_digit + 48);
				putchar(second_digit + 48);
				putchar(third_digit + 48);

				if (first_digit  < 7)
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
	}

	return (0);
}
