#include <stdio.h>

/**
* main - program prints all lowercase alphabet except 'e' and 'q'
*
* Return: 0 always
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
