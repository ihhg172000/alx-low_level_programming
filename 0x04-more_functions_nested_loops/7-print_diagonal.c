#include "main.h"


/**
* print_diagonal - draws a diagonal line on the terminal
* @n:  the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int v_count;

	if (n > 0)
	{

		for (v_count = 1; v_count <= n; v_count++)
		{
			int h_count;

			for (h_count = 1; h_count <= v_count; h_count++)
			{
				if (h_count == v_count)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}

			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
