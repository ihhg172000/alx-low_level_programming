/**
* _sqrt - function that find the natural square root of a number
* @n: number to get its square root
* @sqrt: sqrt to test it
*
* Return: squre root of number n if it has natural squre root. -1 otherwise
*/
int _sqrt(int n, int sqrt)
{
	if (sqrt < 0)
		return (-1);

	if (sqrt * sqrt == n)
		return (sqrt);

	return (_sqrt(n, sqrt - 1));
}

/**
* _sqrt_recursion - function that returns the natural square root of a number
* @n: number to get its square root
*
* Return: squre root of number n if it has natural squre root. -1 otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, n));
}
