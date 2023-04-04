/**
* _strspn - function that gets the length of a prefix substring
* @s: pointer to string
* @accept: pointer to string
*
* Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*(s + i) && *(s + i) != *accept)
		i++;

	return (i + 1);
}
