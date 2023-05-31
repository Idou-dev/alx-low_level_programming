#include "main.h"

/**
 * _strcpy - copied the string from src to dest
 * @src: source
 * @dest: destination
 * Return: the pointer to des
 */

char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
