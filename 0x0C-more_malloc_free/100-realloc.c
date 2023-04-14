#include <stdlib.h>

/**
* _realloc - function that reallocates a memory block using malloc() and free()
* @ptr: pointer to the memory previously allocated
* @old_size: old size of the old memory block
* @new_size: new size of the new memory block
*
* Return: pointer to the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

	if (old_size == new_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (ptr);

	free(ptr);
	ptr = new_ptr;

	return (ptr);
}
