#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to get its last digit
*
* Return: the last digit of given number
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit + 48);
	return (last_digit);
}
