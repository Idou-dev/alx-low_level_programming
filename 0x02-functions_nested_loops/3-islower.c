#include "main.h"

/**
 * _islower - checks for lowercase char
 * @c: an integer
 * Return: 1 if c is a lowercase 0 if not
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
