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
			_putchar((outer * inner) + 48);

			if (inner > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
