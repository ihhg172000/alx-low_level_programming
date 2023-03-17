#include <stdio.h>

/**
* main - Entery point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int ch_ascii;

	for (ch_ascii = 48; ch_ascii <= 57; ch_ascii++)
	{
		putchar(ch_ascii);
		if (ch_ascii < 57)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('$');
			putchar('\n');
		}
	}

	return (0);
}
