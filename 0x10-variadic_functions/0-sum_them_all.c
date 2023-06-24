#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: argument
 * Return: sum of all parameters, and 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list np;

	if (n == 0)
		return (0);
	va_start(np, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(np, int);
	}
	va_end(np);
	return (sum);
}
