/**
* _isupper - checks for uppercase character
* @c: the character to be checked
*
* Return: 1 if character is uppercase letter. 0 otherwise
*/
int _isupper(int c)
{
	char upper_letter;

	for (upper_letter = 'A'; upper_letter <= 'Z'; upper_letter++)
	{
		if (c == upper_letter)
			return (1);
	}

	return (0);
}
