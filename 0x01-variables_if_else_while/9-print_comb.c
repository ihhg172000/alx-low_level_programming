#include <stdio.h>

/**
* main - Entery point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}

	return (0);
}
