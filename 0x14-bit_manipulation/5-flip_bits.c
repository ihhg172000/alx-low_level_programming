#include <stdio.h>
#include "main.h"

/**
* flip_bits -  function returns number of bits that id diff between 2 numbers
* @n: first number
* @m: second number
*
* Return: the number of bits that id diff between two numbers
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f = n ^ m, count = 0;

	while (f)
	{
		if (f & 1)
			count++;

		f = f >> 1;
	}

	return (count);
}
