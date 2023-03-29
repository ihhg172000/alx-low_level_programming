/**
* string_toupper -  changes all lowercase letters of a string to uppercase
* @s: string to convert to uppercase
*
* Return: pointer to string
*/
char *string_toupper(char *s)
{
	char *temp = s;

	while (*temp)
	{
		if (*temp >= 'a' && *temp < 'z')
		{
			*temp = *temp - 32;
		}

		temp++;
	}

	return (s);
}
