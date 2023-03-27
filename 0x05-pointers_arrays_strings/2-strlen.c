/**
* _strlen - get the length of a string
* @s: a pointer to string
*
* Return: length of string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s++ != '\0')
		length++;

	return (length);
}
