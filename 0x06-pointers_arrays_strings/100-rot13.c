/**
* rot13 - function that encodes a string using rot13
* @s: string to encode it
*
* Return: pointer to string
*/
char *rot13(char *s)
{
	char *temp = s;

	while (*temp)
	{
		if ((*temp >= 'a' && *temp <= 'm') || (*temp >= 'A' && *temp <= 'M'))
			*temp += 13;
		else if ((*temp >= 'n' && *temp <= 'z') || (*temp >= 'N' && *temp <= 'Z'))
			*temp -= 13;

		temp++;
	}

	return (s);
}
