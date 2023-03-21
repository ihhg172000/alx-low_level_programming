#include "main.h"

/**
* print_alphabet_10x - prints the alphabet 10 times, in lowercase
*/
void print_alphabet_10x(void)
{
	int count;
	char ch;

	for (count = 1; count <= 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
