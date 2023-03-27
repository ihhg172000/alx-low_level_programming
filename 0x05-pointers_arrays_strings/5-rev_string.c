/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
	char *temp = s;
	char c;
	int length = 0;
	int i = 0;

	while (*temp != '\0')
	{
		length++;
		c = *temp++;
	}

	while (i <= length / 2)
	{
		c = s[i];
		s[i] = *--temp;
		*temp = c;
		i++;
	}
}
