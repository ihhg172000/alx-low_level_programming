#include <stdio.h>

/**
* main - program prints lowercase alphabet
*
* Return: 0 always
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
