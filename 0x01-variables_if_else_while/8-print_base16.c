#include <stdio.h>

/**
* main - program prints the hexadecimal numbers 0 to F
*
* Return: 0 always
*/
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar(num + 48);
		else
			putchar(num + 87);
	}

	putchar('\n');

	return (0);
}
