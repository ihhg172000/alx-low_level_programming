/**
* _strchr - function that locates a character in a string
* @s: pointer to string
* @c: character to locate it
*
* Return: a pointer to the first occurrence of the character c
*/
char *_strchr(char *s, char c)
{
	char *temp = s;

	while (*temp)
	{
		if (*temp == c)
			return (temp);

		temp++;
	}

	if (*temp == c)
		return (temp);

	return (0);
}
