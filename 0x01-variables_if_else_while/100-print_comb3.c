#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char first_digit;
	char second_digit;

	for (first_digit = '0'; first_digit <= '9'; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= '9'; second_digit++)
		{
			putchar(first_digit);
			putchar(second_digit);

			if (first_digit  < '8')
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
