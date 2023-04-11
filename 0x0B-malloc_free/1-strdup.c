#include <stdlib.h>

/**
* _strdup - function copies a string to a new memory block
* @str: pointer to a string to be copied
*
* Return: pointer to a newly allocated memory block
*/
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	size++;

	ptr = (char *) malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];

	return (ptr);
}
