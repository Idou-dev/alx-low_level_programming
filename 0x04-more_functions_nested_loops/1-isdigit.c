#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: an integer
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i + '0')
		{
			return (1);
		}
	}
	return (0);
}
