#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: first string
* @s2: second string
* @n: bytes number of s2
*
* Return: pointer to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1_temp, *s2_temp, *ptr;
	unsigned int s1_len = 0, s2_len = 0, b, i;

	if (s1 == NULL)
		s1_temp = "";
	else
		s1_temp = s1;

	if (s2 == NULL)
		s2_temp = "";
	else
		s2_temp = s2;

	for (i = 0; s1_temp[i]; i++)
		s1_len++;

	for (i = 0; s2_temp[i]; i++)

		s2_len++;

	if (n > s2_len)
		b = s1_len + s2_len;
	else
		b = s1_len + n;

	ptr = (char *) malloc(b + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; *s1_temp; i++)
		ptr[i] = *s1_temp++;

	for (; i < b; i++)
		ptr[i] = *s2_temp++;

	ptr[i] = '\0';

	return (ptr);
}
