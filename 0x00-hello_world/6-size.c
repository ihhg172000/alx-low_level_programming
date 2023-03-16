#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n
		Size of an int: %d byte(s)\n
		Size of a long int: %d byte(s)\n
		Size of a long long int: %d byte(s)\n
		Size of a float: %d byte(s)\n"
		, sizeof(ch), sizeof(i), sizeof(li), sizeof(lli), sizeof(f));

	return (0);
}
