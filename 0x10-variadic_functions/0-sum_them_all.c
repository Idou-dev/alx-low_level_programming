#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the first parameter
 * Return: the sum of all its parameters or 0 if n equals 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list np;

	if (n == 0)
		return (0);
	va_start(np, n);
	for (i = 0; i <= n; i++)
	{
		sum += va_arg(np, int);
	}
	va_end(np);
	return (sum);
}
