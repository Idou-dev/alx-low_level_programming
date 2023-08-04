#include <stdio.h>

int sup_sqrt(int n, int i);

/**
 * sup_sqrt - finds natural square of a number
 * @n: first int
 * @i: second int
 * Return: natural square of a number
 */

int sup_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (sup_sqrt(n, i));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sup_sqrt(n, 0));
}
