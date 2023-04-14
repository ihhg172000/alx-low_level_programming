#include <stdlib.h>

/**
* array_range - function that creates an array of integers
* @min: minimum number
* @max: maximum number
*
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *ptr, count, i, j;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = (int *) malloc(count * sizeof(int));

	if (ptr == NULL)
		return (0);

	for (i = 0, j = min; j <= max; i++, j++)
		ptr[i] = j;

	return (ptr);
}
