#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
