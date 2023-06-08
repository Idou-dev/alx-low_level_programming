#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: an integer
 * Return: the factorial of n
 */

int factorial(int n)
{
	int i = 0;

	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		i = n * factorial(n - 1);
		return (i);
	}
	return (-1);
}
