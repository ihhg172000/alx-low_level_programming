/**
* reverse_array -  function that reverses an array of integers
* @a: array to be reversed
* @n: number of elements of array
*/
void reverse_array(int *a, int n)
{
	int *ptr = a + (n - 1);
	int temp;
	int i = 0;

	while (i < (n - 1) / 2)
	{
		temp = a[i];
		a[i] = *ptr;
		*ptr = temp;

		ptr--;
		i++;
	}
}
