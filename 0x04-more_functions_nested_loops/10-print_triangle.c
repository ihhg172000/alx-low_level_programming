#include "main.h"

/**
* print_triangle - prints a triangle
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	int v_count;

	if (size > 0)
	{
		for (v_count = 1; v_count <= size; v_count++)
		{
			int h_count;

			for (h_count = 1; h_count <= size; h_count++)
			{
				if (h_count >= 1 && h_count <= size - v_count)
					_putchar(' ');
				else
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
