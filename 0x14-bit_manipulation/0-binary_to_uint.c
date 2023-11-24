#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of a string
 */

int _strlen(const char *s)
{
	int l;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i , l, k = 1, n = 0;

	if (b == NULL)
		return (0);
	l = _strlen(b);
	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			n += k;
		k *= 2;
	}
	return (n);
}
