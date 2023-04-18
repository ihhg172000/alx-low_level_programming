#include <stdio.h>

/**
* main - program prints numbers from 0 to 9 using putchar() function
*
* Return: 0 always
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + 48);
	putchar('\n');

	return (0);
}
