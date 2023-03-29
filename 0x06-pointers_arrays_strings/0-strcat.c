/**
* _strcat - function that concatenates two strings
* @dest: destination string to append to it
* @src: source to be appended
*
* Return: pointer to destination string
*/
char *_strcat(char *dest, char *src)
{
	char *dest_temp = dest;
	char *src_temp = src;

	while (*dest_temp)
		dest_temp++;

	while (*src_temp)
		*dest_temp++ = *src_temp++;

	*dest_temp = '\0';

	return (dest);
}
