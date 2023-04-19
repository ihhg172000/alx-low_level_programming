#include <stddef.h>

/**
* array_iterator - function calls a given function on each element of an array
* @array: array of integers
* @size: size of array
* @action: function pointer to the function that will be called
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
