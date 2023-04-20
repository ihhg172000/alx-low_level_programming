#include <stdio.h>
#include <stdarg.h>

/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0, accepted;

	va_start(ptr, format);
	while (format && format[i])
	{
		accepted = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				accepted = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				accepted = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				accepted = 1;
				break;
			case 's':
			{
				char *s = va_arg(ptr, char *);

				accepted = 1;
				if (s == NULL)
				{
					printf("%s", "(nil)");
					break;
				}
				printf("%s", s);
			}
		}
		if (accepted && format[i + 1])
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(ptr);
}
