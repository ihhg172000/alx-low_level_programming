#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return:
 *      the first index where value is located if value is present in array,
 *      -1 If value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, lidx, ridx;

	if (!array)
		return (-1);

	step = sqrt(size);

	for (lidx = ridx = 0; lidx < size; ridx += step)
	{
		if (ridx < size && array[ridx] < value)
		{
			lidx = ridx;
			printf("Value checked array[%lu] = [%d]\n", ridx, array[ridx]);
		}
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n", lidx, ridx);

			for (; lidx < size && lidx <= ridx; lidx++)
			{
				printf("Value checked array[%lu] = [%d]\n", lidx, array[lidx]);

				if (array[lidx] == value)
					return (lidx);
			}

			break;
		}
	}

	return (-1);
}
