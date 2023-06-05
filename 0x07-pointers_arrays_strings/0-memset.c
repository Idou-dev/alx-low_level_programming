#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to char
 * @b: a character
 * @n: an int
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
