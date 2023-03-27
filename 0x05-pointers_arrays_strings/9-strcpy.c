/**
* _strcpy - copies string pointed to by src to the buffer pointed to by dest
* @dest: the buffer pointed to by dest
* @src: the string pointed to by src
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';

	return (ptr);
}
