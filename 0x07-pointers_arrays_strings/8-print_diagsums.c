#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to matrix
* @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				d1 += *(a + (size * i + j));

			if (j == (size - 1) - i)
				d2 += *(a + (size * i + j));
		}
	}

	printf("%d, %d\n", d1, d2);
}
