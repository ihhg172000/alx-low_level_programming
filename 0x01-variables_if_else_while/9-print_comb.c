#include <stdio.h>

/**
* main - program prints numbers from 0 to 9 separated by commas & spaces
*
* Return: 0 always
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
