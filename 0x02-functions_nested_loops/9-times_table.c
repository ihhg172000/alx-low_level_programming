#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int outer;
	int inner;

	for (outer = 0; outer <= 9; outer++)
	{
		for (inner = 0; inner <= 9; inner++)
		{
			int mul = outer * inner;

			if (inner > 0)
			{
				if (mul > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (mul <= 9)
			{
				_putchar(mul + 48);
			}
			else
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}

		_putchar('\n');
	}
}
