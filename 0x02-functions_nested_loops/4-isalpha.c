#include "main.h"

/**
 * _isalpha - checks for alphbetic character
 * @c: an integer
 * Return: 1 if c is an alphabetic char 0 if not
 */

int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i || c == i - 32)
		{
			return (1);
		}
	}
	return (0);
}
