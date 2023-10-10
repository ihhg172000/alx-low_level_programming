#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return:
 *	the first index where value is located if value is present in array,
 *	-1 If value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, pos;

	if (!array)
		return (-1);

	l = 0;
	h = size - 1;

	while (l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			h = pos - 1;
		else
			l = pos + 1;
	}

	return (-1);
}
