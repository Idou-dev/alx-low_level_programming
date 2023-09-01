#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: the binary number to be converted
 * Return: converted number or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
