#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: the length of s
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: the binary number to be converted
 * Return: converted number or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;
	int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		val = val * 2 + (b[i] - '0');
	}
	return (val);
}
