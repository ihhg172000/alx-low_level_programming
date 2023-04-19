/**
* int_index - function searches for an integer
* @array: array of integers
* @size: size of array
* @cmp: function pointer to the function to be used to compare values
*
* Return: index of the first element for which the cmp() does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
