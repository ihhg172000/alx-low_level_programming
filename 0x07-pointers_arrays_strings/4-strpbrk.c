/**
* _strpbrk - function that searches a string for any of a set of bytes
* @s: pointer to string
* @accept: pointer to string
*
* Return: pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	char *temp = s;
	unsigned int i, is_accept = 0;

	while (*temp)
	{
		is_accept = 0;

		for (i = 0; *(accept + i); i++)
		{
			if (*temp == *(accept + i))
				is_accept = 1;
		}

		if (is_accept)
			return (temp);

		temp++;
	}

	return (0);
}
