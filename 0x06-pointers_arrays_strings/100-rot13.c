/**
* rot13 - function that encodes a string using rot13
* @s: string to encode it
*
* Return: pointer to string
*/
char *rot13(char *s)
{
	char *alpha = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *rot13 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}

		i++;
	}

	return (s);
}
