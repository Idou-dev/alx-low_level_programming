#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the first parameter
 * Return: the sum of all its parameters or 0 if n equals 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list np;

	if (!n)
		return (0);
	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(np, int);
	}
	va_end(np);
	return (sum);
}