#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: an integer
 * Return: 1 if c is uppercse 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
