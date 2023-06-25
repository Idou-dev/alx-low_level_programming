#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string separating numbers
 * @n: number of parameters passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nptr;

	va_start(nptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nptr, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nptr);
}
