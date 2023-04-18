#include <stdio.h>

/**
* main - program prints lowercase alphabet in revese order
*
* Return: 0 always
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
