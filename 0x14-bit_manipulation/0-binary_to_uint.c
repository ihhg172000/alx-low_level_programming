#include "main.h"

/**
* _pow - function calculates the power of number
* @number: _
* @power: _
*
* Return: the power of number
*/
unsigned int _pow(unsigned int number, unsigned int power)
{
	if (power == 0)
		return (1);

	return (number * _pow(number, --power));
}

/**
* binary_to_uint - function converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
*
* Return: the converted number, or 0 if there is eny error
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, power = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	while (--i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		else if (b[i] == '1')
			number += _pow(2, power);

		power++;
	}

	return (number);
}
