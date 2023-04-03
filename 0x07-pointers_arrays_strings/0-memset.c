/**
* _memset - function that fills memory with a constant byte
* @s: pointer to the memory area
* @b: constant byte
* @n: bytes of the memory area pointed
*
* Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
		*temp++ = b;

	return (s);
}
