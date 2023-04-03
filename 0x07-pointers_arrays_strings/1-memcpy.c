/**
* _memcpy - function that copies memory area
* @dest: pointer to destnation memory area
* @src: pointer to source memory area
* @n: number of bytes to be cobied
*
* Return: pointer to destnation memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d_temp = dest;
	char *s_temp = src;

	while (n--)
	{
		*d_temp = *s_temp;
		d_temp++;
		s_temp++;
	}

	return (dest);
}
