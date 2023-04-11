#include <stdlib.h>

/**
* create_array - creates an array of chars, and init it with a specific char
* @size: size of the array to be created
* @c: value to be initialized in each element of the array
*
* Return: pointer to the first element of the created array
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size);
	unsigned int i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
