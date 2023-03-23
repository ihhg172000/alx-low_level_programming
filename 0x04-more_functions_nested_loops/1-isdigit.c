/**
* _isdigit - checks for a digit (0 through 9)
* @c: the character to be checked
*
* Return: 1 if character is digit. 0 otherwise
*/
int _isdigit(int c)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
			return (1);
	}

	return (0);
}
