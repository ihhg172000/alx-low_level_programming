/**
* _strstr -  function that locates a substring
* @haystack: pointer to string
* @needle: pointer to string
*
* Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *temp = haystack;
	unsigned int i, is_found = 0;

	if (*needle == '\0')
		return (temp);

	while (*temp)
	{
		for (i = 0; *(needle + i); i++)
		{
			if (*(temp + i) == *(needle + i))
				is_found = 1;
			else
			{
				is_found = 0;
				break;
			}
		}

		if (is_found)
			return (temp);

		temp++;
	}

	return (0);
}
