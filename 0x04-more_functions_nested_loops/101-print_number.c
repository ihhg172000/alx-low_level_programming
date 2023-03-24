#include "main.h"

int _abs(int n);

/**
* print_number - prints an integer
* @n: the integer number to be printed
*/
void print_number(int n)
{
	int abs_value = _abs(n);
	int base = 1;

	while (abs_value / (base * 10) != 0)
		base *= 10;

	if (n < 0)
		_putchar('-');

	while (base >= 1)
	{
		_putchar((abs_value / base) % 10 + 48);
		base /= 10;
	}
}

/**
* _abs - gets the absolute value of given number
* @n: the number to get its absolute value
*
* Return: absolute value of given number
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
