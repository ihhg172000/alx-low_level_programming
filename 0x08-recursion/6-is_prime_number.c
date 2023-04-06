/**
* _is_prime_number - function that check prime number
* @n: number to check it
* @f: factor
*
* Return: 1 if the input integer is a prime number, 0  otherwise
*/
int _is_prime_number(int n, int f)
{
	if (n == f)
		return (1);

	if (n % f == 0)
		return (0);
	if (n < 0)
		return (_is_prime_number(n, f - 1));
	else
		return (_is_prime_number(n, f + 1));
}

/**
* is_prime_number - function that check prime number
* @n: number to check it
*
* Return: 1 if the input integer is a prime number, 0  otherwise
*/
int is_prime_number(int n)
{
	if (n == 1)
		return (0);

	return (_is_prime_number(n, 2));
}
