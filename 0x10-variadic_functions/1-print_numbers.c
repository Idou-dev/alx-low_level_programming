#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separator between numbers
 * @n: an integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list np;
	unsigned int i;

	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(np, int));
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(np);
}
