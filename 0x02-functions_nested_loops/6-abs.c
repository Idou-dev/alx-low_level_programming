#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: an integer
 * Return: the absolute value of i
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	return (i);
}
