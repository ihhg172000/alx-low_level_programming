#include "main.h"

/**
* print_times_table - prints the times table of given number, starting with 0
* @n: the number to get its times table
*/
void print_times_table(int n)
{
	int outer, inner;

	if (n < 0 || n > 15)
		return;

	for (outer = 0; outer <= n; outer++)
	{
		for (inner = 0; inner <= n; inner++)
		{
			int mul = outer * inner;

			if (inner > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (mul < 100 && mul >= 10)
					_putchar(' ');
				else if (mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}

			if (mul <= 9)
			{
				_putchar(mul + 48);
				continue;
			}
			else if (mul <= 99)
				_putchar((mul / 10) + 48);
			else
			{
				_putchar((mul / 100) + 48);
				_putchar(((mul / 10) % 10) + 48);
			}
				_putchar((mul % 10) + 48);
		}
		_putchar('\n');
	}
}
