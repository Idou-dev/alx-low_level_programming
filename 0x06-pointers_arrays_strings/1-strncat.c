#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: first pointer to char
 * @dest: second pointer to char
 * @n: an integer
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l, k;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	if (k < n)
	{
		for (i = 0; i < k; i++)
		{
			dest[l + i] = src[i];
		}
		dest[l + k] = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[l + i] = src[i];
		}
		dest[l + n] = '\0';
	}
	return (dest);
}
