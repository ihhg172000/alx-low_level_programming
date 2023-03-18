#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int first_num_fd;
	int first_num_sd;
	int second_num_fd;
	int second_num_sd;

	for (first_num_fd = 0; first_num_fd <= 9; first_num_fd++)
	{
		for (first_num_sd = 0; first_num_sd <= 9; first_num_sd++)
		{
			for (second_num_fd = 0; second_num_fd <= 9; second_num_fd++)
			{
				for (second_num_sd = 0; second_num_sd <= 9; second_num_sd++)
				{

				if (first_num_fd + first_num_sd < second_num_fd + second_num_sd)
				{
					putchar(first_num_fd + 48);
					putchar(first_num_sd + 48);
					putchar(' ');
					putchar(second_num_fd + 48);
					putchar(second_num_sd + 48);

					if (!(first_num_fd == 9 &&
					first_num_sd == 8 &&
					second_num_fd == 9 &&
					second_num_sd == 9))
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
