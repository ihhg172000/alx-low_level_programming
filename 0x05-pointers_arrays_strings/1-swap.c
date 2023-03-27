/**
* swap_int - that swaps the values of two integers
* @a: first pointer to an integer
* @b: second pointer to an integer
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
