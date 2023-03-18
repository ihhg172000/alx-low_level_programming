#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = 48; first_digit <= 57; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= 57; second_digit++)
		{
			putchar(first_digit);
			putchar(second_digit);

			if (first_digit  < 56)
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
