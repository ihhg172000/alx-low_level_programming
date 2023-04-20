#include <stdio.h>
#include <stdarg.h>

/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;

	va_start(ptr, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				printf("%s", (format[i + 1] != '\0' ? ", " : ""));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				printf("%s", (format[i + 1] != '\0' ? ", " : ""));
				break;
			case 'f':
				printf("%f", (float) va_arg(ptr, double));
				printf("%s", (format[i + 1] != '\0' ? ", " : ""));
				break;
			case 's':
			{
				char *s = va_arg(ptr, char *);

				printf("%s", (s != NULL ? s : "(nil)"));
				printf("%s", (format[i + 1] != '\0' ? ", " : ""));
			}
		}

		i++;
	}

	putchar('\n');

	va_end(ptr);
}
