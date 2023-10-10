#include <stdio.h>

/**
 * print_array - prints an array
 * @array: a pointer to the first element of the array to print
 * @size: the number of elements in array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		printf("%s", i < size - 1 ? ", " : "\n");
	}
}

/**
 * binary_search - searches for a value in a sorted array
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return:
 *	the first index where value is located if value is present in array,
 *	-1 If value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array + left, (right - left) + 1);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
