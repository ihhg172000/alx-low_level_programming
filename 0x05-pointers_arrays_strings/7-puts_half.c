#include "main.h"

/**
* puts_half - prints half of a string
* @str: the string to be printed
*/
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2 + 1;

	for (i = 0; i <= length; i++)
	{
		if (i >= n && str[i] != '\0')
			_putchar(str[i]);
	}

	_putchar('\n');
}
