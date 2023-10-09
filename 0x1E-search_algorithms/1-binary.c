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
 * range_binary_search - searches for a value in range of sorted array elements
 * @array: a pointer to the first element of the array to search in
 * @start: the start index of range to search in
 * @end: the end index of range to search in
 * @value: the value to search for
 *
 * Return:
 *      the first index where value is located if value is present in array,
 *      -1 If value is not present in array or if array is NULL
 */
int range_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (!array || (end - start) + 1 == 0)
		return (-1);

	printf("Searching in array: ");
	print_array(array + start, (end - start) + 1);

	mid = start + (end - start) / 2;

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (range_binary_search(array, start, mid - 1, value));
	else
		return (range_binary_search(array, mid + 1, end, value));
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
	return (range_binary_search(array, 0, size - 1, value));
}
