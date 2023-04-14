#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array using malloc() function
* @nmemb: number of elements
* @size: size of element
*
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
