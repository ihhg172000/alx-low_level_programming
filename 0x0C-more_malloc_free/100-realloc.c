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
	unsigned int i, min;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size && ptr != NULL)
		return (ptr);

	if (old_size < new_size)
		min = old_size;
	else
		min = new_size;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = new_ptr;
		return (ptr);
	}

	for (i = 0; i < min; i++)
		((char *) new_ptr)[i] = ((char *) ptr)[i];

	free(ptr);
	ptr = new_ptr;

	return (ptr);
}
