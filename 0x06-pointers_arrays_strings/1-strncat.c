/**
* _strncat - function that concatenates two strings
* @dest: destination string to append to it
* @src: source to be appended
* @n:  most number of bytes to append from src
*
* Return: pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_temp = dest;
	char *src_temp = src;

	while (*dest_temp)
		dest_temp++;

	while (n > 0)
	{
		if (*src_temp)
		{
			*dest_temp++ = *src_temp++;
			n--;
		}
		else
			break;
	}

	*dest_temp = '\0';

	return (dest);
}
