/**
* leet - function that encodes a string into 1337
* @s: string to encode it
*
* Return: pinter to string
*/
char *leet(char *s)
{
	char *temp = s;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	int i;

	while (*temp)
	{
		for (i = 0; i < 10; i++)
		{
			if (*temp == letters[i])
				*temp = numbers[i];
		}

		temp++;
	}

	return (s);
}
