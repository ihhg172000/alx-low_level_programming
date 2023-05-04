#include "main.h"

/**
* set_bit - function sets the value of a bit to 1 at a given index
* @n: the number
* @index: the given index starting from 0 of the bit you want to set
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
