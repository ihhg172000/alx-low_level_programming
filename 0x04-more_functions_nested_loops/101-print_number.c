#include "main.h"

/**
* print_number - prints an integer
* @n: the integer number to be printed
*/
void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		number = n * -1;
		_putchar('-');
	}
	else
		number = n;

	if ((number / 10) != 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
