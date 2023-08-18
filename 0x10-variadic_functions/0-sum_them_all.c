#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the first parameter
 * Return: the sum of all its parameters or 0 if n equals 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(p, int);
	va_end(p);
	return (sum);
}
