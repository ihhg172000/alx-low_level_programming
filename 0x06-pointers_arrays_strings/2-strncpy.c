/**
* _strncpy - function that copies a string
* @dest: destination string to copy to it
* @src: source to be copied
* @n:  most number of bytes to copy from src
*
* Return: pointer to destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_temp = dest;
	char *src_temp = src;
	int src_len = 0;

	while (*src_temp)
	{
		src_len++;
		src_temp++;
	}

	src_temp = src;

	while (n > 0)
	{
		if (src_len > 0)
			*dest_temp++ = *src_temp++;
		else
			*dest_temp++ = '\0';

		src_len--;
		n--;
	}

	return (dest);
}
