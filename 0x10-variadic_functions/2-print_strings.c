#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function prints strings
* @separator : string to be printed between the strings
* @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		char *curr_string = va_arg(ptr, char *);

		if (curr_string != NULL)
			printf("%s", curr_string);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ptr);
}
