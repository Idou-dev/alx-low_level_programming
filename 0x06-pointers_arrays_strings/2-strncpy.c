#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: an int
 * Return: pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, l, j;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	if (l < n)
	{
		for (j = l; j < n; j++)
			dest[j] = '\0';
	}
	return (dest);
}
