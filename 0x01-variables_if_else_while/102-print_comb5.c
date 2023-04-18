#include <stdio.h>

/**
* main - program prints all unique combinations of two pairs of two digits
*
* Return: 0 always
*/
int main(void)
{
	int first_num_1st_digit;
	int first_num_2nd_digit;
	int second_num_1st_digit;
	int second_num_2nd_digit;

	for (first_num_1st_digit = 0; first_num_1st_digit <= 9; first_num_1st_digit++)
	{
		for (first_num_2nd_digit = 0; first_num_2nd_digit <= 9; first_num_2nd_digit++)
		{
			for (second_num_1st_digit = 0; second_num_1st_digit <= 9; second_num_1st_digit++)
			{
				for (second_num_2nd_digit = 0;
					 second_num_2nd_digit <= 9;
						 second_num_2nd_digit++)
				{
					if (first_num_1st_digit * 10 + first_num_2nd_digit
						 < second_num_1st_digit * 10 + second_num_2nd_digit)
					{
						putchar(first_num_1st_digit + 48);
						putchar(first_num_2nd_digit + 48);
						putchar(' ');
						putchar(second_num_1st_digit + 48);
						putchar(second_num_2nd_digit + 48);

						if (!(first_num_1st_digit == 9 &&
							first_num_2nd_digit == 8 &&
								second_num_1st_digit == 9 &&
									second_num_2nd_digit == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
