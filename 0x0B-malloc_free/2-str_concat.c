#include <stdlib.h>

/**
* str_concat - function that concatenates two strings
* @s1: pointer to the first string to be concatenated.
* @s2: pointer to the second string to be concatenated.
*
* Return: pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int size = 0, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		size++;

	for (i = 0; s2[i]; i++)
		size++;

	size++;

	ptr = (char *) malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0; s1[i]; i++, j++)
		ptr[j] = s1[i];

	for (i = 0; s2[i]; i++, j++)
		ptr[j] = s2[i];

	return (ptr);
}
