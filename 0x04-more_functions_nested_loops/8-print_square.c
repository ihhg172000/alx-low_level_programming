#include "main.h"

/**
* print_square - prints a square
* @size: the size of the square
*/
void print_square(int size)
{
	int v_count;

	if (size > 0)
	{
		for (v_count = 1; v_count <= size; v_count++)
		{
			int h_count;

			for (h_count = 1; h_count <= size; h_count++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
