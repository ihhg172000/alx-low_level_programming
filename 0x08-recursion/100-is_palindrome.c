/**
*_strlen_recursion - function that returns the length of a string
* @s: string to get its length
*
* Return: length of a string
*/
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* _is_palindrome - check for palindrome string
* @s: string to be checked
* @len: length of string
* @i: iteration number
*
* Return: 1 if a string is a palindrome and 0 if not
*/
int _is_palindrome(char *s, int len, int i)
{
	if (i > len / 2)
		return (1);

	if (*(s + i) != *(s + ((len - 1) - i)))
		return (0);

	return (_is_palindrome(s, len, i + 1));
}

/**
* is_palindrome - check for palindrome string
* @s: string to be checked
*
* Return: 1 if a string is a palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	return (_is_palindrome(s, _strlen_recursion(s), 0));
}
