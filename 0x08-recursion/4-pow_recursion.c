#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first integer
 * @y: second integer
 * Return: value of x raised to the power of y on succes, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0 || x == 1)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
