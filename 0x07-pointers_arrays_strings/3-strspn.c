/**
* _strspn - function that gets the length of a prefix substring
* @s: pointer to string
* @accept: pointer to string
*
* Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, is_accept = 0;

	for (i = 0; *(s + i); i++)
	{
		is_accept = 0;

		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				is_accept = 1;
		}

		if (!is_accept)
			return (i);
	}

	return (0);
}
