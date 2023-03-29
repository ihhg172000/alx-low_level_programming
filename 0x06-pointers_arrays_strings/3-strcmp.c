/**
* _strcmp - function that compares two strings.
* @s1: first string
* @s2: second string
*
* Return: 0 if stringes ate same. ASCII code defference otherwise
*/
int _strcmp(char *s1, char *s2)
{
	char *s1_temp = s1;
	char *s2_temp = s2;

	while (*s1_temp && *s2_temp)
	{
		if (*s1_temp == *s2_temp)
		{
			s1_temp++;
			s2_temp++;
		}
		else
			return (*s1_temp - *s2_temp);
	}

	return (*s1_temp - *s2_temp);
}
